#include <iostream>
#include <array>
#include <string>
#include "funcs.h"

bool validInput(const std::string & row, const std::string & column,const char (&board)[SIZE][SIZE]){
    for (const char & i : row){
        if (!std::isdigit(i))
            return false;
    }
    for (const char & i : column){
        if (!std::isdigit(i))
            return false;
    }
    if (std::stoi(row) > LINES || std::stoi(row) < 0 || std::stoi(column) > LINES || std::stoi(column) < 0 ||
    board[std::stoi(row)*2][std::stoi(column)*2] != ' ')
        return false;
    return true;
}

std::array<int, 2> playerInput(const char (&board)[SIZE][SIZE]){
    std::array<int, 2> indexes{};
    std::cout<<"Enter a row and column to add your symbol \n";
    std::string row{};
    std::string column{};
    std::getline(std::cin, row);
    std::getline(std::cin, column);
    while (!validInput(row, column, board)){
        std::cout<<"Oops! Can't put a symbol there. Enter a row and colum to add your symbol. \n";
        std::getline(std::cin, row);
        std::getline(std::cin, column);
    }
    indexes.at(0) = std::stoi(row)*2;
    indexes.at(1) = std::stoi(column)*2;
    return indexes;
}

void insert(char (&board)[SIZE][SIZE], const std::array<int, 2> indexes, const char xo){
    board[indexes.at(0)][indexes.at(1)] = xo;
}
