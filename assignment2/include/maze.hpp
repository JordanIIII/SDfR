//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Sets constants for number of rows and cols, as well as defining the grid type
//
//=============================================================================

#ifndef SDFR_INITIALIZEMAZE_HPP
#define SDFR_INITIALIZEMAZE_HPP

#include <array>

// Dimensions of the maze
constexpr int rows = 12;
constexpr int cols = 12;

// Maze type definition
typedef std::array<std::array<char, cols>, rows> grid;

// Function declaration
grid initializeMaze();
void printMaze(const grid& maze);  // The & means that the original maze is passed and not a copy.

#endif //SDFR_INITIALIZEMAZE_HPP