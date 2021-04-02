/*
U54554816
Andrew Umana
This program creates a tic tac toe game 
*/



#include <iostream>
#include <array>
#include <string>
#include <iomanip>

using namespace std;

void print(array<array<char, 3>, 3> table);

int main() {
    cout << "Welcome to Tic Tac Toe\n\n";
    int turn = 0, moves = 0, row, column;
    char winner = '-';
    array<array<char, 3>, 3> table;
       
    for (int i = 0; i < 3; i++) 
    {
      for (int j = 0; j < 3; j++) 
        {
            table[i][j] = ' ';
        }
    }
   
    while (true) 
    {
        print(table);

        
        if (turn == 0) {
            cout << "X's turn\nPick a row (1, 2, 3): ";
            cin >> row;
           
            cout << "Pick a columnumn (1, 2, 3): ";
            cin >> column;
            
            if (row < 1 || row > 3 || column < 1 || column > 3)
                cout << "Error: Invalid row or columnumn!\n";
            
            if (table[row - 1][column - 1] == ' ') 
            {
                table[row - 1][column - 1] = 'X';
                turn = 1;  
                moves++;
            }
            else
                cout << "Error: This cell is already occupied!\n";
       }
        
        else 
            if (turn == 1) 
            {
                cout << "O's turn\n";
                cout << "Pick a row (1, 2, 3): ";
                cin >> row;
            
                cout << "Pick a columnumn (1, 2, 3): ";
                cin >> column;
            
            
                if (row < 1 || row > 3 || column < 1 || column > 3)
                    cout << "Error: Invalid row or columnumn!\n";
            
                if (table[row - 1][column - 1] == ' ') 
                 {
                     table[row - 1][column - 1] = 'O';
                     turn = 0;  
                     moves++;
                }

                else
                    cout << "Error: This cell is already occupied!\n";
             }

       
        if (table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X') {
            winner = 'X';
            break;
        }
        else 
            if (table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X') 
            {
                winner = 'X';
                break;
            }

        else 
            if (table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X') 
            {
                winner = 'X';
                break;
            }
        
        else 
            if (table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X') 
            {
                winner = 'X';
                break;
            }

        else 
            if (table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X') 
            {
                 winner = 'X';                 
                 break;
            }

        else 
             if (table[0][2] == 'X' && table[1][2] == 'X' && table[2][2] == 'X') 
             {
                winner = 'X';
                break;
             }
        else 
             if (table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X') 
             {
                winner = 'X';
                break;
              }

        else 
              if (table[0][2] == 'X' && table[1][1] == 'X' && table[2][0] == 'X') 
              {
                winner = 'X';
                break;
              }
        
        else 
              if (table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O') 
              {
                winner = 'O';
                break;
              }
        else 
              if (table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O') 
              {
                winner = 'O';
                break;
              }

        else 
              if (table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O') 
              {
                winner = 'O';
                break;
            }

        else 
              if (table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O') 
              {
                winner = 'O';
                break;
              }

        else 
              if (table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O') 
              {
                winner = 'O';
                break;
              }
        
        else 
              if (table[0][2] == 'O' && table[1][2] == 'O' && table[2][2] == 'O') 
              {
                winner = 'O';
                break;
                }
        else 
              if (table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O') 
              {
                winner = 'O';
                break;
                }
        else 
                  if (table[0][2] == 'O' && table[1][1] == 'O' && table[2][0] == 'O') 
                  {
                    winner = 'O';
                    break;
                    }
        else if (moves == 9)
            break;
    }

 
    print(table);
    if (moves == 9 && winner == '-')
        cout << "It's a tie!\n\n";
    else {
        cout << winner << " wins!\n\n";
    }
    cout << "Game over!" << endl;
    return 0;
}

void print(array<array<char, 3>, 3> table) {
    
    for (int i = 0; i < 3; i++) {
        cout << "+---+---+---+\n";
        for (int j = 0; j < 3; j++) {
            cout << "| " << table[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "+---+---+---+\n\n";
}
