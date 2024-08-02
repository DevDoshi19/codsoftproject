#include <iostream>
using namespace std;

class game
{
public:
    void setprint()
    {
        cout<<"!_____________________________________________________________________________!"<<endl;
        cout << "THE GAME MODE IS BELOW, FOR PLAYING A GAME ENTER ROW AND COLUMN LIKE BELOW:" << endl;
        cout << "00 01 02" << endl;
        cout << "10 11 12" << endl;
        cout << "20 21 22" << endl;
        cout<<"!_____________________________________________________________________________!"<<endl;
    }

    void maingame(char p1,char p2);
};

void game::maingame(char p1,char p2)
{
     char a[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    
    int i, j;
    static int count = 0;

    for (count = 0; count < 9; count++)
    {
        if (count % 2 == 0)
        {
        reverse1:
            cout << "Player 1, enter row: ";
            cin >> i;
            if (i < 0 || i > 2)
            {
                cout << "Enter a correct input  (00,01,02,10,11,12,20,21,22)  :" << endl;
                goto reverse1;
            }

        reverse2:
            cout << "Player 1, enter column: ";
            cin >> j;
            if (j < 0 || j > 2)
            {
                cout << "Enter a correct input  (00,01,02,10,11,12,20,21,22)  :" << endl;
                goto reverse2;
            }
            if (a[i][j] == ' ')
            {
                a[i][j] = p1;
            }
            else
            {
                cout << "Cell already occupied. Please rewrite." << endl;
                count--;
            }
        }
        else
        {
        reverse3:
            cout << "Player 2, enter a row : ";
            cin >> i;
            if (i < 0 || i > 2)
            {
                cout << "Enter a correct input (00,01,02,10,11,12,20,21,22)  :" << endl;

                goto reverse3;
            }
        reverse4:
            cout << "Player 2, enter a column: ";
            cin >> j;

            if (j < 0 || j > 2)
            {
                cout << "Enter a correct input (00,01,02,10,11,12,20,21,22) :" << endl;
                goto reverse4;
            }
            if (a[i][j] == ' ')
            {
                a[i][j] = p2;
            }
            else
            {
                cout << "Cell already occupied. Please rewrite." << endl;
                count--;
            }
        }

        for (int row = 0; row < 3; row++)
        {
            for (int column = 0; column < 3; column++)
            {
                cout << a[row][column] << " ";
            }
            cout << endl;
        }
        if ((a[0][0] != ' ' && a[0][0] == a[1][1] && a[1][1] == a[2][2]) ||
            (a[0][2] != ' ' && a[0][2] == a[1][1] && a[1][1] == a[2][0]) ||
            (a[0][0] != ' ' && a[0][0] == a[1][0] && a[1][0] == a[2][0]) ||
            (a[0][1] != ' ' && a[0][1] == a[1][1] && a[1][1] == a[2][1]) ||
            (a[0][2] != ' ' && a[0][2] == a[1][2] && a[1][2] == a[2][2]) ||
            (a[0][0] != ' ' && a[0][0] == a[0][1] && a[0][1] == a[0][2]) ||
            (a[1][0] != ' ' && a[1][0] == a[1][1] && a[1][1] == a[1][2]) ||
            (a[2][0] != ' ' && a[2][0] == a[2][1] && a[2][1] == a[2][2]))
        {
            cout << "Player won" << endl;
            break;
        }
        else if (count == 8)
        {
            cout << "It's a draw!" << endl;
        }
    }
}

int main()
{  
    string n1, n2,in;
    char c1,c2;
        cout<<"                ||____________*Tic-Tak-Toe-Game*____________||"<<endl;
        cout<<"                   ||____________*Game Start*____________||"<<endl;
    start:
    cout << "WELCOME TO THE GAME, WHERE THE 1ST PLAYER IS CONSIDERED AS 'O' AND THE 2ND PLAYER IS CONSIDERED AS 'X'" << endl;
    cout << "Enter the 1st player's name: ";
    cin >> n1;
    cout << "Enter the 2nd player's name: ";
    cin >> n2;
    cout << "The players' names are: " << n1 << " and " << n2 << endl;
    cout << "Enter the 1st player's symbol: ";
    cin >> c1;
    cout << "Enter the 2nd player's symbol: ";
    cin >> c2;
  
    game g1;
    g1.setprint();
    g1.maingame(c1,c2);
    cout << "Thank you for playing game " << endl;
    cout<<"want to play again enter a yes and if not enter no"<<endl;
    cin>>in;
    if (in=="yes")
    {
        cout<<"           ||____________*New Game Start*____________||"<<endl;
        goto start;
    }
    else{
        cout<<"|_______________________________________________________________|"<<endl;
        cout<<"     Thank you for playing , hope you really enjoy the game "<<endl;
        cout<<"|_______________________________________________________________|"<<endl;
    }
    
    return 0;
}