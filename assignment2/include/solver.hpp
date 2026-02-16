 //=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Defines the scoped enumerator for directions, as well as a struct for position
//
//=============================================================================

#ifndef SDFR_SOLVER_HPP
#define SDFR_SOLVER_HPP

#include "maze.hpp"

// Scoped enumerator Direction
enum class Direction {
 UP,
 RIGHT,
 DOWN,
 LEFT
};

// Simple structure that holds the X and Y coordinates in the maze
struct Position {
 int row;
 int col;
};

Position findStart(const grid& maze);

bool traverseMaze(grid& maze, const int row, const int col, const Direction currentDir);

#endif //SDFR_SOLVER_HPP