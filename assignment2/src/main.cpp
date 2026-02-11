 //=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Maze solver algorithm
//
//=============================================================================

#include <iostream>
#include "../include/maze.hpp"
#include "../include/solver.hpp"

 int main() {

 Maze maze = initializeMaze();
 Position start = findStart(maze);
 printMaze(maze);

 // Change starting position to a '.' so that the solver sees it as a path
 maze[start.row][start.col] = '.';

 if (traverseMaze(maze, start.row, start.col)) {
  std::cout << '\n';
 } else {
  std::cout << "No solution found." << std::endl;
 }

 // std::cout << start.row << " " << start.col << std::endl;
 return 0;

}