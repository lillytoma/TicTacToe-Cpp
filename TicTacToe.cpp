#include <iostream>
#include <cstdlib>

using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char currentPlayer = 'X';

// Function to draw the Tic Tac Toe board
void drawBoard() {
    cout << "\n     TIC TAC TOE\n\n";
    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
    cout << "     |     |     " << endl << endl;
    
}

// Function to check if a player has won
bool checkWin() {
    // Check rows
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            cout << "Player won!";
        }
    }
    // Check columns
    for(int i = 0; i < 3; i++) {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            cout << "Player won!";
        }
    }
    // Check diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        cout << "Player won!";
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        cout << "Player won!";
    }
    else{
       return false; 
    }
}

// Function to check if the game is a tie
bool checkTie() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] != 'X' && board[i][j] != 'O') {
                cout << "This was a cats game!";
            }
            else{
                return false;
            }
        }
    }
}

// Function to switch players
void switchPlayer() {
    if(currentPlayer == 'X') {
        currentPlayer = '0';
    }
    else {
        currentPlayer = 'X';
    }
}

// Main function to play the game
int main() {
    int row, col;
    while(true) {
        drawBoard();
        checkWin();
        cout << "Player " << currentPlayer << ", enter a row number (1-3): ";
        cin >> row;
        cout << "Player " << currentPlayer << ", enter a column number (1-3): ";
        cin >> col;
        switchPlayer();
        checkTie();
        if(row == 1 && col == 1){
            board[0][0] = 'Y';
            if(currentPlayer = '0'){
            board[0][0] = 'X';
            }
        };
        if(row == 1 && col == 2){
            board[0][1] = 'Y';
            if(currentPlayer == '0'){
            board[0][1] = 'X';
            }
        };
        if(row == 1 && col == 3){
            board[0][2] = 'Y';
            if(currentPlayer == '0'){
            board[0][2] = 'X';
            }
        };
        if(row == 2 && col == 1){
            board[1][0] = 'Y';
            if(currentPlayer == '0'){
            board[1][0] = 'X';
            }
        };
        if(row == 2 && col == 2){
            board[1][1] = 'Y';
            if(currentPlayer == '0'){
            board[1][1] = 'X';
            }
        };
        if(row == 2 && col == 3){
            board[1][2] = 'Y';
            if(currentPlayer == '0'){
            board[1][2] = 'X';
            }
        };
        if(row == 3 && col == 1){
            board[2][0] = 'Y';
            if(currentPlayer == '0'){
            board[2][0] = 'X';
            }
        };
        if(row == 3 && col == 2){
            board[2][1] = 'Y';
            if(currentPlayer == '0'){
            board[2][1] = 'X';
            }
        };
        if(row == 3 && col == 3){
            board[2][2] = 'Y';
            if(currentPlayer == '0'){
            board[2][2] = 'X';
            }
        if(false){
            cout << "game ended";
            break;
        }
        }
        };
        // Check if the cell is valid and empty
        
    return 0;
}




