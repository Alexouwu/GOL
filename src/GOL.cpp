#include "GOL.h"
#include <iostream>

void GOF::update()
{
    std::vector<std::pair<int, int>> changeStatusIdx;
    for(size_t i = 0; i < myBoard.getSize(); i++){
        for(size_t j = 0; j< myBoard.getSize(); j++){
            if(willChange(i, j)){
                changeStatusIdx.push_back(std::make_pair(i, j));
            }
        }
    }
    updateBoard(changeStatusIdx);
};


bool GOF::willChange(int i, int j)
{
    bool isAlive = myBoard.cells[i][j][0];
    uint8_t myNeighbors = countNeighbors(i, j);
    if(!isAlive && willBorn(myNeighbors)){
        return true;
    }
    if(isAlive && willDie(myNeighbors)){
        return true;
    }
    return false;
};


uint8_t GOF::countNeighbors(int i, int j)
{
    uint8_t neighborCount {};
    for (size_t ii = i-1; ii <= i+1; ii++)
    {
        if(ii > boardSize-1 || ii < 0) continue;
        for (size_t jj = j-1; jj <= j+1; jj++)
        {
            if(jj > boardSize-1 || jj < 0 || (ii == i && jj == j)) continue;
            if (myBoard.cells[ii][jj][0])
            {
                neighborCount++;
            }
            
        }
        
    }
    return neighborCount;
}


bool GOF::willBorn(int myNeighbors)
{
    if (myNeighbors == 3)
    {
        return true;
    }
    return false;
};


bool GOF::willDie(int myNeighbors)
{
    if (myNeighbors > 3 || myNeighbors < 2)
    {
        return true;
    }
    return false;
    
};


void GOF::updateBoard(std::vector<std::pair<int, int>> &changeStatusIdx)
{
    for(auto idx: changeStatusIdx){
        myBoard.cells[idx.first][idx.second][0].flip();
    }
};
