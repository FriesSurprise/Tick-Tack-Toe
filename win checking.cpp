#include "funcs.h"
#include <map>
std::map<bool, char> checkWin(const char (&board)[SIZE][SIZE]){
    std::map<bool, char> won{};
    for (int i = 0; i < SIZE; i+=2){
        if (board[0][i] == board[2][i] && board[4][i] == board[2][i] && board[2][i] != ' '){
            won.insert({true, board[0][i]});
            return won;
        }
    }
    for (int i = 0; i < SIZE; i+=2){
        if (board[i][0] == board[i][2] && board[i][2] == board[i][4]&&  board[i][2] != ' '){
            won.insert({true, board[i][2]});
            return won;
        }
    }
    if ((board[2][2] == board[0][4] && board[2][2] == board[4][0]
    || board[2][2] == board[0][0] && board[2][2] == board[4][4])
    && board[2][2] != ' '){
        won.insert({true, board[2][2]});
        return won;
    }
    int count{0};
    for (auto & i : board){
        for (auto & j : i){
            if (j == 'X' || j == 'O')
                count++;
        }
    }
    if (count == LINES*LINES)
        won.insert({true, 'T'});
    else
        won.insert({false, ' '});
    return won;
}

