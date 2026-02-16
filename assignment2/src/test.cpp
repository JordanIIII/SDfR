//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Test file used for testing edge cases
//
//=============================================================================

#include <iostream>
#include "../include/maze.hpp"
#include "../include/solver.hpp"

int main() {

    grid maze = {{
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
        {'#', '.', '#', '.', '#', '.', '#', '#', '.', '#', '.', '#'},
        {'#', '#', '#', '.', '#', '.', '.', '#', '.', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', 'x'},
        {'#', '.', '#', '#', '.', '.', '.', '#', '.', '#', '.', '#'},
        {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '.', '.', '#', '.', '#', '.', '.', '.', '#', '.', '#'},
        {'#', '#', '.', '#', '#', '#', '#', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    }};
    Position startPos = findStart(maze);
    printMaze(maze);

    // Initial direction is set to north
    constexpr Direction startDir = Direction::UP;

    // Change starting position to a '.' for the solver
    maze[startPos.row][startPos.col] = '.';

    // Start the maze traversal
    if (traverseMaze(maze, startPos.row, startPos.col, startDir)) {
        std::cout << "Solution found.\n" << std::endl;
    } else {
        std::cout << "No solution found.\n" << std::endl;
    }

    return 0;

}