#include <iostream>
#include "BOARD.h"

class Util
{
private:

    
public:
    Util(/* args */);
    ~Util();
    static void printBoard(BOARD board){
        char blackSquare = 0x2588;
        for(int i=0; i<board.getSize(); i++){std::cout << "_";}
        std::cout << std::endl;
        for(auto row: board.cells){
            for(auto cell: row){
                if(cell == 0) std::cout << "  ";
                if(cell==1) std::cout << blackSquare << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
};


