 //=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Solving algorithm for the maze
//
//=============================================================================

#include <iostream>
#include <thread>
#include <chrono>
#include "../include/solver.hpp"
#include "../include/maze.hpp"

Position findStart(const Maze& maze) {
 // Iterate through each row
 for (int row = 0; row < MAZE_ROWS; ++row) {
  // Iterate through each column
  for (int col = 0; col < MAZE_COLS; ++col) {

   // Check if current cell matches 'x'
   if (maze[row][col] == 'x') {
    return {row, col};
   }
  }
 }

 // Error message in the event it fails to find the start.
 std::cout << "Failed to find starting position.";
 return {-1, -1};
}

bool traverseMaze(Maze& maze, const int row, const int col) {

 // Check bounds
 if (row < 0 || col < 0 || row >= MAZE_ROWS || col >= MAZE_COLS) {
  return false;
 }

 // Check walls and path
 if (maze[row][col] == '#' || maze[row][col] == 'x') {
  return false;
 }

 // Check if the maze was solved (column == 0)
 if (col == 0) {
  maze[row][col] = 'x'; // Mark the final step
  printMaze(maze);      // Show the completed maze
  std::cout << "Exit found.";
  return true;
 }

 // Set current position to 'x' and visualize
 maze[row][col] = 'x';
 printMaze(maze);
 std::this_thread::sleep_for(std::chrono::milliseconds(100));

 // Try moving North
 if (traverseMaze(maze, row - 1, col) == true) return true;

 // Try moving East
 if (traverseMaze(maze, row, col + 1) == true) return true;

 // Try South
 if (traverseMaze(maze, row + 1, col) == true) return true;

 // Try West
 if (traverseMaze(maze, row, col - 1) == true) return true;

 // If none of the directions worked, go back
 maze[row][col] = '.';
 printMaze(maze);
 std::this_thread::sleep_for(std::chrono::milliseconds(100));
 return false;
}