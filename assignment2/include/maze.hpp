//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Initializes array for the maze
//
//=============================================================================

#ifndef SDFR_INITIALIZEMAZE_HPP
#define SDFR_INITIALIZEMAZE_HPP

#include <array>

// Dimensions
const int MAZE_ROWS = 12;
const int MAZE_COLS = 12;

// Type definition
using Maze = std::array<std::array<char, MAZE_COLS>, MAZE_ROWS>;

// Function declaration
Maze initializeMaze();
void printMaze(const Maze& maze);  // Without the & at Maze&, the program would make a full copy of the maze at every function call.

#endif //SDFR_INITIALIZEMAZE_HPP