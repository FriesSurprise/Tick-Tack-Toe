#ifndef TICK_TACK_TOE_FUNCS_H
#define TICK_TACK_TOE_FUNCS_H
    #define SIZE 5
    #define LINES 2
    #include <array>
    #include <map>
    void prepare (char (&board)[SIZE][SIZE]);
    void print(const char (&board)[SIZE][SIZE]);
    std::array<int, 2> playerInput(const char (&board)[SIZE][SIZE]);
    void insert(char (&board)[SIZE][SIZE], std::array<int, 2> indexes, char xo);
    std::map<bool, char> checkWin(const char (&board)[SIZE][SIZE]);

#endif