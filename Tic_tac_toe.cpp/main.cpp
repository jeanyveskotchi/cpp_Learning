#include <iostream>
using namespace std;

// lets create a grid

char board[3][3]=
{{'1','2','3'},
{'4','5','6'},
{'7','8','9'}};

void printBoard(){
    cout<< "----------\n";
    for (int i=0;i<3;i++){
        cout<< "|";
    for (int j=0;j<3;j++){
        cout<< board[i][j]<< "|";
    }
 cout<< "\n----------\n";
    }
}

bool isWinner(char player){
//lets check the rows 
for (int i=0;i<3;i++){
    if (board[i][0]== player && board[i][1]== player && board[i][2]== player)
    return true;
}
    //lets check the columns
    for (int j=0;j<3;j++){
    if (board[0][j]== player && board[1][j]== player && board[2][j]== player)
    return true;
 }
 // lets check diagonals
 if (board[0][0]== player && board[1][1]== player && board[2][2]== player 
    || board[0][2]== player && board[1][1]== player && board[2][0]== player)
    return true;

    return false;
}

bool isDraw(){
for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
    if (board[i][j] != 'X' && board[i][j] != 'O' )
    return false;
    }
       }
       return true;
          }

int main(){
 char player='X';
 int choice;
 int col,row;

 while (true)
 {
    printBoard();
    cout<< "Player " << player << ", pick a number between (1-9)";
    cin>> choice;

    row=(choice-1)/3;
    col=(choice-1)%3;

if (choice>9 || choice<1 or board[row][col]=='X' || board[row][col]=='O'){
cout<< "invalid move! try another one\n";
continue;
 }
board[row][col]= player;

if (isWinner(player)){
 printBoard();
    cout<< "Player " << player << " won!\n";
break;
 }
 
 if (isDraw()){
    printBoard();
    cout<< "This is a draw!\n";
break;
 }

if (player=='X')
    player='O';
    else{
     player='X';   
    }

}
return 0;
}
