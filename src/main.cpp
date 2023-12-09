#include "GOL.h"
#include <iostream>
#include "BOARD.h"
#include "Util.hpp"
#include <thread>
#include <chrono>

int main(){
    int waitingTime {750};
    BOARD myBoard(40);
    myBoard.cells[1+1][0+1][0] = 1;
    myBoard.cells[2+1][1+1][0] = 1;
    myBoard.cells[2+1][2+1][0] = 1;
    myBoard.cells[1+1][2+1][0] = 1;
    myBoard.cells[0+1][2+1][0] = 1;
    Util::printBoard(myBoard);
    std::this_thread::sleep_for(std::chrono::milliseconds(waitingTime));
    GOL game(myBoard);
    for (size_t i = 0; i < 100; i++)
    {
        game.update();
        Util::printBoard(myBoard);
        std::this_thread::sleep_for(std::chrono::milliseconds(waitingTime));
    }
    
    return 0;
}