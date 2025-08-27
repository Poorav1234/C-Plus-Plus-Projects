#include<iostream>
#include<windows.h>
#include <conio.h>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    char arr[10][20],shead;
    string status="playing",ans;
    int rowpos=3,colpos=11;
    int score=0;
    string move="right",eatenStatus="no";
    vector<pair<int, int>> snake;
    snake.push_back({rowpos, colpos});
    //*************************************************************** */
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(i==0 || i==9 || j==0 || j==19  )
            {
                arr[i][j]='*';
            }
            else{
                arr[i][j]=' ';
            }
        }
    }
    shead=arr[rowpos][colpos]='O';
//*************************************************************** */
    cout<<"\nPress keys to play the game\n";
    cout<<"Up key to Go upwards\n";
    cout<<"Down key for Go Down\n";
    cout<<"Right key for Go Right\n";
    cout<<"Left key for Go Left\n\n";

    cout<<"Are you ready to play the game? ";
    cin>>ans;
    if(ans == "Yes" || ans=="yes" || ans=="YES")
    {
        status="started";
    }
    else{
        status="ended";
    }
    int x = 1 + rand() % 8;    
    int y = 1 + rand() % 18; 

    arr[x][y]='@';
    while(status!="ended")
    {
        if (_kbhit()) { 
            arr[rowpos][colpos] = ' ';
            int ch = _getch(); 

            if (ch == 224) {
                int arrow = _getch(); // Get second code

                switch (arrow) {
                    case 72: move="up"; break;
                    case 80: move="down"; break;
                    case 75: move="left"; break;
                    case 77: move="right"; break;
                    default: move = "other"; break;
                }
            }
            int newRow = rowpos, newCol = colpos;
            if (move == "up"){
                newRow--;
            } 
            else if (move == "down"){
                newRow++;
            }
            else if (move == "left"){
                newCol--;
            } 
            else if (move == "right"){
                newCol++;
            } 
            else {
                status = "ended"; 
            }

            if (arr[newRow][newCol] == '*')
            {
                status = "ended";
                break;
            }

            pair<int, int> newPos = {newRow, newCol};
            for (int i = 0; i < snake.size(); i++) {
                if (snake[i] == newPos) {
                    status = "ended";
                    break;
                }
            }


            bool grow = false;
            if(arr[x][y] == arr[rowpos][colpos])
            {
                arr[x][y]=' ';
                grow = true;
                x = 1 + rand() % 8;
                y = 1 + rand() % 18;
                arr[x][y] = '@';
                score++;
            }
            
            snake.insert(snake.begin(), {newRow, newCol});
            rowpos = newRow;
            colpos = newCol;

            if (!grow) {
                pair<int, int> tail = snake.back();
                arr[tail.first][tail.second] = ' ';
                snake.pop_back();
            }
        }
        for (int i = 0; i < snake.size(); i++) {
            if(i == 0) {
                arr[snake[i].first][snake[i].second]='O';
            } 
            else{
                arr[snake[i].first][snake[i].second]='o';
            } 
        }

        system("cls");
        cout<<endl;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<20;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        Sleep(300);
    }
    cout << "\nGame Over!\n";
    cout << "Score is : "<<score<<endl;
    return 0;
}