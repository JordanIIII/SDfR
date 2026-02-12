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

int delay = 100; // Delay in milliseconds for visualization.

Position findStart(const Maze& maze) {
 // Iterate through each row
 for (int row = 0; row < MAZE_ROWS; ++row) {
  // Iterate through each column
  for (int col = 0; col < MAZE_COLS; ++col) {

   // Check if current cell matches 'x'.
   if (maze[row][col] == 'x') {
    return {row, col};
   }
  }
 }

 // Error message in the event it fails to find the start.
 std::cout << "Failed to find starting position.";
 return {-1, -1};
}

// Return the row and col offset depending on current direction
Position getOffset(Direction dir) {
 switch (dir) {
  case Direction::NORTH:    return {-1,0};
  case Direction::SOUTH:    return {1,0};
  case Direction::EAST:     return {0,1};
  case Direction::WEST:     return {0,-1};
 }
 // Default case
 return {0, 0};
}

////////// Functions for turning
// Left
Direction turnLeft(Direction dir) {
 switch (dir) {
  case Direction::NORTH:    return Direction::WEST;
  case Direction::SOUTH:    return Direction::EAST;
  case Direction::EAST:     return Direction::NORTH;
  case Direction::WEST:     return Direction::SOUTH;
 }
 // Default case
 return Direction::NORTH;
};

// Right
Direction turnRight(Direction dir) {
 switch (dir) {
  case Direction::NORTH:    return Direction::EAST;
  case Direction::SOUTH:    return Direction::WEST;
  case Direction::EAST:     return Direction::SOUTH;
  case Direction::WEST:     return Direction::NORTH;
 }
 // Default case
 return Direction::NORTH;
};

// Back
Direction turnBack(Direction dir) {
 return turnRight(turnRight(dir));
};
/////////////

// Recursive function to traverse the maze
bool traverseMaze(Maze& maze, const int row, const int col, const Direction currentDir) {

 // Check bounds
 if (row < 0 || col < 0 || row >= MAZE_ROWS || col >= MAZE_COLS) return false;

 // Check walls and path
 if (maze[row][col] == '#' || maze[row][col] == 'x') return false;

 // Check if the maze was solved (column == 0)
 if (col == 0) {
  maze[row][col] = 'x'; // Mark last step
  printMaze(maze);
  return true;
 }

 // Set current position to 'x' and visualize
 maze[row][col] = 'x';
 printMaze(maze);
 std::this_thread::sleep_for(std::chrono::milliseconds(delay));

 // Define the order in which the directions are tried (for loop)
 Direction tryOrder[] = {
    turnRight(currentDir),  // First try turning right
    currentDir,             // If not possible, go straight
    turnLeft(currentDir),   // If not possible, turn left
    turnBack(currentDir)    // Finally if those are impossible, turn back
 };

 // Try each direction in the defined order
 for (Direction dir : tryOrder) {
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