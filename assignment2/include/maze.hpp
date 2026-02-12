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

// Dimensions of the maze
const int MAZE_ROWS = 12;
const int MAZE_COLS = 12;

// Maze type definition
typedef std::array<std::array<char, MAZE_COLS>, MAZE_ROWS> Maze;

// Function declaration
Maze initializeMaze();
void printMaze(const Maze& maze);  // The & means that the original maze is passed and not a copy.

#endif //SDFR_INITIALIZEMAZE_HPP