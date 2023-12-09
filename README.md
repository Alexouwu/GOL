# Conways Game of Life
https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life

## Table of Contents

- [About](#about)
  - [Installation](#installation)


## About

This project is an implementation of Conway's game of life using cpp

### Installation

Create build directory, then cd into build directory. Create make files with cmake .. and then build the project with make

```bash
# Example installation command
mkdir build
cd build
cmake ..
make
./GoL
```

Once you do ./GoL the game will start, the default pattern can be seen on main.cpp. Make sure that the terminal is big enough so that you can see the whole state of the board.
The defualt size of the board is 40x40. The board size as well as initial patter can be changed in main cpp

```bash
# Example installation command
BOARD myBoard(40);
myBoard.cells[1+1][0+1][0] = 1;
myBoard.cells[2+1][1+1][0] = 1;
myBoard.cells[2+1][2+1][0] = 1;
myBoard.cells[1+1][2+1][0] = 1;
myBoard.cells[0+1][2+1][0] = 1;
```

Other parameters that can be changes are waitingTime, which is the period to update the game and the number of iterations we want

```bash
# Example installation command
for (size_t i = 0; i < 100; i++)
    {
        game.update();
        Util::printBoard(myBoard);
        std::this_thread::sleep_for(std::chrono::milliseconds(waitingTime));
    }
```

![Project Demo](demo.gif)
