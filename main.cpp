#include <iostream>
#include "tictactoe.h"
using namespace std;


int main (void)
{
    tictactoe t;
    int x, y, count=0;
    while (true)
    {
        t.print();
        cout<<"Paizei o: ";
        cout<<t.get_player()<<endl;
        cout<<"Line(0-2): ";
        cin>>x;
        cout<<"Column(0-2): ";
        cin>>y;
        if(!t.play(x,y))
        {
            cout<<"Lathos kinisi!"<<endl;
            continue;
        }
        else
            count++;
        if(t.check_winner()!='-')
        {   
            t.print();
            cout<<"Nikitis einai o: "<<t.check_winner();
            break;
        }
        else if(count==9)
        {
            t.print();
            cout<<"Isopalia";
            break;
        }
        t.next_player();
    }
    
    return 0;
}