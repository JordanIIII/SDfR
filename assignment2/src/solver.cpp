 //=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Solving algorithm for the maze
//
//=============================================================================

#include <iostream>
#include <thread> // For pausing the algorithm so that it can be viewed in real time.
#include <chrono> // For pausing the algorithm so that it can be viewed in real time.
#include "../include/solver.hpp"
#include "../include/maze.hpp"

int delay = 300; // Delay in milliseconds for visualization.

Position findStart(const grid& maze) {
 // Iterate through each row
 for (int row = 0; row < rows; ++row) {
  // Iterate through each column
  for (int col = 0; col < cols; ++col) {

   // Check if current cell matches 'x'.
   if (maze[row][col] == 'x') {
    return {row, col};
   }
  }
 }

 // In case it does not find an 'x', function must return something
 return {-1, -1};
}

// Return the row and col offset depending on current direction
Position getOffset(const Direction dir) {
 switch (dir) {
  case Direction::UP:    return {-1,0};
  case Direction::DOWN:    return {1,0};
  case Direction::RIGHT:     return {0,1};
  case Direction::LEFT:     return {0,-1};
 }
 // Default case
 return {0, 0};
}

////////// Functions for turning
// Left
Direction turnLeft(const Direction dir) {
 switch (dir) {
  case Direction::UP:    return Direction::LEFT;
  case Direction::DOWN:    return Direction::RIGHT;
  case Direction::RIGHT:     return Direction::UP;
  case Direction::LEFT:     return Direction::DOWN;
 }
 // Default case
 return Direction::UP;
};

// Right
Direction turnRight(const Direction dir) {
 switch (dir) {
  case Direction::UP:    return Direction::RIGHT;
  case Direction::DOWN:    return Direction::LEFT;
  case Direction::RIGHT:     return Direction::DOWN;
  case Direction::LEFT:     return Direction::UP;
 }
 // Default case
 return Direction::UP;
};

/////////////

// Recursive function to traverse the maze
bool traverseMaze(grid& maze, const int row, const int col, const Direction currentDir) {

 // Check if your're in the maze
 if (row < 0 || col < 0 || row >= rows || col >= cols) return false;

 // Check walls and path
 if (maze[row][col] == '#' || maze[row][col] == 'x') return false;

 // Check if the maze was solved (column == 0)
 if (col == 0 || row == 0 || row == 11) {
  maze[row][col] = 'x'; // Mark last step
  printMaze(maze);
  return true;
 }

 // Set current position to 'x' and visualize
 maze[row][col] = 'x';
 printMaze(maze);
 std::this_thread::sleep_for(std::chrono::milliseconds(delay));

 // Define the order in which the directions are tried (for loop)
 Direction turnOrder[] = {
    turnRight(currentDir),  // First try turning right
    currentDir,             // If not possible, go straight
    turnLeft(currentDir)   // If not possible, turn left
 };

 // Try each direction in the defined order
 for (const Direction dir : turnOrder) {
  Position offset = getOffset(dir);
  if (traverseMaze(maze, row + offset.row, col + offset.col, dir)) {
   return true;
  }
 }

 // If none of the directions worked, remove path and go back
 maze[row][col] = '.';
 printMaze(maze);
 std::this_thread::sleep_for(std::chrono::milliseconds(delay));
 return false;
}