#include <iostream>
#include "tictactoe.h"
using namespace std;


tictactoe::tictactoe()
{
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
            array[i][j]='-';
    }
    player='X';
}
bool tictactoe::play(int x, int y)
{
    if (array[x][y]=='-')
    {
       array[x][y]=player;
       return true;
    }
    else 
        return false;
}
char tictactoe::check_winner()
{
    for (int i=0; i<N; i++)
    {
        if (array[i][0]==array[i][1] && array[i][1]==array[i][2])
        return array[i][0];
    }
    for (int j=0; j<N; j++)
    {
        if (array[0][j]==array[1][j] && array[1][j]==array[2][j])
        return array[0][j];
    }
    if (array[0][0]==array[1][1] && array[1][1]==array[2][2])
    return array[0][0];
    if (array[0][2]==array[1][1] && array[1][1]==array[2][0])
    return array[0][2];
    else 
    return '-';
}
void tictactoe::print()
{
    for(int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
            cout<<array[i][j];
        cout<<endl;
    }
}
void tictactoe::next_player()
{
    if (player=='X')
        player='0';
    else
        player='X';
}
char tictactoe::get_player()
{
    return player;
}