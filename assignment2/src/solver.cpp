 //=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Solving algorithm for the maze
//
//=============================================================================

#include <iostream>
#include "../include/solver.hpp"

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