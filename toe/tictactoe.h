#ifndef TICTACTOE_H_
#define TICTACTOE_H_

void initialize(char board[][3]);
void print(const char board[][3]);
bool hasWon(const char board[][3], char player);
bool isValidIndex(int x,int y);
void setMark(char board[][3], char player);


#endif /* TICTACTOE_H_ */