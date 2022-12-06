#include "funcs.h"
#include <iostream>

int main() {
    char board[SIZE][SIZE];
    prepare(board);
    print(board);
    while (checkWin(board).count(true) != 1) {
        std::cout << "player X's turn! \n";
        insert(board, playerInput(board), 'X');
        print(board);
        if (checkWin(board).count(true) == 1)
            break;
        std::cout << "player O's turn! \n";
        insert(board, playerInput(board), 'O');
        print(board);
    }
    if (checkWin(board).at(true) == 'T')
        std::cout<<"Tie! ";
    else
        std::cout<<"congrats player "<<checkWin(board).at(true)<<"! You have won!";
    return 0;
}
