#include <iostream>
using namespace std;
#define N 3

class tictactoe
{
    public:
        tictactoe();
        bool play(int x, int y);
        char check_winner();
        void print();
        void next_player();
        char get_player();
    
    private:
        char array [N][N];
        char player;
    
};