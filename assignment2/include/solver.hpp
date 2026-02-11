 //=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Solving algorithm for the maze
//
//=============================================================================

#ifndef SDFR_SOLVER_HPP
#define SDFR_SOLVER_HPP

#include "maze.hpp"

// Simple structure that holds the X and Y coordinates in the maze
struct Position {
 int row;
 int col;
};

Position findStart(const Maze& maze);

bool traverseMaze(Maze& maze, const int row, const int col);

#endif //SDFR_SOLVER_HPP