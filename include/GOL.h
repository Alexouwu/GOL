#include "BOARD.h"

class GOL
{
private:
    bool willChange(int i, int j);
    bool willBorn(int myNeighbors);
    bool willLive(int myNeighbors);
    bool willDie(int myNeighbors);
    uint8_t countNeighbors(int i, int j);
    int boardSize {};
    void updateBoard(std::vector<std::pair<int, int>> &changeStatusIdx);
public:
    GOL(BOARD &board) : myBoard(board), boardSize(board.getSize()){};
    BOARD &myBoard;
    void update(void);
    void modify(BOARD board);
};

