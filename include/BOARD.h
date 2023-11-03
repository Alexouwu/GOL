#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <bitset>

class BOARD
{
private:
    int size{0};
    int id{};
public:
    BOARD(int mySize) : size(mySize), cells(size, std::vector<std::bitset<1>>(size, std::bitset<1>(0))){};
    std::vector<std::vector<std::bitset<1>>> cells;
    int getSize() {return size;}
};

#endif // BOARD_H
