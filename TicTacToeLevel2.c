#include <stdio.h>
#include <stdlib.h>

int main()
{
    int turn, box, brs, klm, win, i, player, a, b;
    char player1 = 'X';
    char player2 = 'O';
    char board[3][3] = {{'.','.','.'}, {'.','.','.'}, {'.','.','.'}};

    //Buat Papan
    printf ("\n\n");
    printf("  %c  |  %c  |  %c  \n", board[0][0], board[0][1], board[0][2]);
    printf("_____|_____|_____\n");
    printf("  %c  |  %c  |  %c  \n", board[1][0], board[1][1], board[1][2]);
    printf("_____|_____|_____\n");
    printf("  %c  |  %c  |  %c  \n", board[2][0], board[2][1], board[2][2]);
    printf("     |     |     \n\n");

    //Level I
    for(i = 1; i < 10; i ++){
        if(i%2 == 1){
            player = 1;
        } else if (i%2 == 0){
            player = 2;
        }
        printf("player %d your move = ", player);
        scanf ("%d %d", &a, &b);
        printf ("\n");
        if (board[a][b] == '.'){
            if(player == 1){
                board[a][b] = 'X';
            } else if (player == 2){
                board[a][b] = 'O';
            }
        } else if (board[a][b] != '.' || a >= 3 || b >=3){
            system("cls");
            printf("     Invalid\n\n");
            printf("  %c  |  %c  |  %c  \n", board[0][0], board[0][1], board[0][2]);
            printf("_____|_____|_____\n");
            printf("  %c  |  %c  |  %c  \n", board[1][0], board[1][1], board[1][2]);
            printf("_____|_____|_____\n");
            printf("  %c  |  %c  |  %c  \n", board[2][0], board[2][1], board[2][2]);
            printf("     |     |     \n\n");
            printf("player %d your move = ", player);
            scanf ("%d %d", &a, &b);
            printf ("\n");
            if(player == 1){
                board[a][b] = 'X';
            } else if (player == 2){
                board[a][b] = 'O';
            }
        }

        system("cls");
        printf ("\n\n");
        printf("  %c  |  %c  |  %c  \n", board[0][0], board[0][1], board[0][2]);
        printf("_____|_____|_____\n");
        printf("  %c  |  %c  |  %c  \n", board[1][0], board[1][1], board[1][2]);
        printf("_____|_____|_____\n");
        printf("  %c  |  %c  |  %c  \n", board[2][0], board[2][1], board[2][2]);
        printf("     |     |     \n\n");

        if (board [a][b] != '.'){
            if(board[0][0] == board[0][1] && board[0][0] == board[0][2] && board[0][0] == 'X'){
                printf("Player 1 win");
                break;
            }
            else if(board[0][0] == board[0][1] && board[0][0] == board[0][2] && board[0][0] == 'O'){
                printf("Player 2 win");
                break;
            }
            else if(board[1][0] == board[1][1] && board[1][0] == board[1][2] && board[1][0] == 'X'){
                printf("Player 1 win");
                break;
            }
            else if(board[1][0] == board[1][1] && board[1][0] == board[1][2] && board[1][0] == 'O'){
                printf("Player 2 win");
                break;
            }
            else if(board[2][0] == board[2][1] && board[2][0] == board[2][2] && board[2][0] == 'X'){
                printf("Player 1 win");
                break;
            }
            else if(board[2][0] == board[2][1] && board[2][0] == board[2][2] && board[2][0] == 'O'){
                printf("Player 2 win");
                break;
            }
            else if(board[0][0] == board[1][0] && board[0][0] == board[2][0] && board[0][0] == 'X'){
                printf("Player 1 win");
                break;
            }
            else if(board[0][0] == board[1][0] && board[0][0] == board[2][0] && board[0][0] == 'O'){
                printf("Player 2 win");
                break;
            }
            else if(board[0][1] == board[1][1] && board[0][1] == board[2][1] && board[0][1] == 'X'){
                printf("Player 1 win");
                break;
            }
            else if(board[0][1] == board[1][1] && board[0][1] == board[2][1] && board[0][1] == 'O'){
                printf("Player 2 win");
                break;
            }
            else if(board[0][2] == board[1][2] && board[0][2] == board[2][2] && board[0][2] == 'X'){
                printf("Player 1 win");
                break;
            }
            else if(board[0][2] == board[1][2] && board[0][2] == board[2][2] && board[0][2] == 'O'){
                printf("Player 2 win");
                break;
            }
            else if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] == 'X'){
                printf("Player 1 win");
                break;
            }
            else if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] == 'O'){
                printf("Player 2 win");
                break;
            }
            else if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] == 'X'){
                printf("Player 1 win");
                break;
            }
            else if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] == 'O'){
                printf("Player 2 win");
                break;
            }
            else if(board[0][0] != '.' && board[0][1] != '.' && board[0][2] != '.' && board[1][0] != '.' && board[1][1] != '.' && board[1][2] != '.' && board[2][0] != '.' && board[2][1] != '.' && board[2][2] != '.'){
                printf("DRAW");
                break;
            }
        }

    }

}
