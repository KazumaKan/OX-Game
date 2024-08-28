#include <stdio.h>
#include <stdbool.h> // Use the bool command

// Set define
#define COMPUTER 1 
#define HUMAN 2 
#define SIDE 3 
#define COMPUTERMOVE 'O' 
#define HUMANMOVE 'X' 

// Store row and column positions.
struct Move 
{
    int row; // Store row
    int col; // Store column
};

// Set player => 'x' and com => 'O'.
char player = 'x';
char com = 'o';

// Checks if there are any unfilled spaces on the board.
bool Spaces(char board[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == '-')
                return 1;
    return 0;
}

// Check the board to see if anyone has won yet?

// Com : Find a possible way to win.

// Player : Remember the movement

// Show Board
void ShowBoard(char board[][SIDE]) {
    printf(" | %c | %c | %c | \n", board[0][0], board[0][1], board[0][2]);
    printf(" -------------- \n");
    printf(" | %c | %c | %c | \n", board[1][0], board[1][1], board[1][2]);
    printf(" -------------- \n");
    printf(" | %c | %c | %c | \n", board[2][0], board[2][1], board[2][2]);
}

// Shows instructions on how to play the game.
void ShowInstructions()
{
    printf(" XO Game \n");
    printf(" | 1 | 2 | 3 | \n");
    printf(" -------------- \n");
    printf(" | 4 | 5 | 6 | \n");
    printf(" -------------- \n");
    printf(" | 7 | 8 | 9 | \n");

}

// initialise
void Initialise(char board[][SIDE],
                int moves[])
{

}

// Winner Announcement

// Check if there are any rows on the board that have the same symbols in each row.
int RowCrossed(char board[][SIDE])
{
    for (int i = 0; i < SIDE; i++)
        { if (board[i][0] == board[i][1] 
            && board[i][1] == board[i][2]
            && board[i][0] != ' ')
            return 1;
        }

    return 0;
}

// Check if there are any columns on the board that have the same symbols in all columns.
int ColCrossed(char board[][SIDE])
{
    for (int i = 0; i < SIDE; i++)
        { if (board[0][i] == board[1][i] 
            && board[1][i] == board[2][i]
            && board[0][i] != ' ')
            return 1;
        }

    return 0;
}

// Check if there are any diagonals on the board that have the same markings on all diagonals.
int DiaCrossed(char board[][SIDE])
{
    if ((board[0][0] == board[1][1] 
         && board[1][1] == board[2][2] 
         && board[0][0] != ' ')
        ||(board[0][2] == board[1][1] 
           && board[1][1] == board[2][0] 
           && board[0][2] != ' ')) 
        return 1; 
  
    return 0; 
}

// Check if the match has ended (has a winner or the board is full).
int GameOver(char board[][SIDE]) 
{ 
    return (RowCrossed(board) || ColCrossed(board) || DiaCrossed(board)); 
} 

// Conduct game play between players and the computer.

int main()
{
    // Randomly select who will start first.
    
    return 0;
}