#include <iostream>
#include "funcs.h"
void prepare (char (&board)[SIZE][SIZE]){
    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j<SIZE; ++j){
            if (i%2 == 1 && j%2==0) {
                board[i][j] = '-';
                continue;
            }
            if (i%2 == 0 && j%2 == 1) {
                board[i][j] = '|';
                continue;
            }
            if (i%2 == 1 && j%2 == 1) {
                board[i][j] = '+';
                continue;
            }
            board[i][j] = ' ';
        }
    }
}

void print(const char (&board)[SIZE][SIZE]) {
    std::cout<<"  0   1   2\n";
    for (int i = 0; i < SIZE; ++i) {
        if (i % 2 == 0)
            std::cout<<i/2<<" ";
        else
            std::cout<<"  ";
        for (int j = 0; j < SIZE; ++j) {
            std::cout << board[i][j] << ' ';
        }
        std::cout << '\n';
    }
}