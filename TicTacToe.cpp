#include<iostream>
using namespace std;
int main()
{
    static int var=0,pos,reenter=0;
    char arr[3][3]={'_','_','_','_','_','_','_','_','_'};
    string ans,winner="";
    int player1,player2;

    cout<<"\nDo you want to play Tic Tac Toe ? \n";
    cin>>ans;

    if(ans == "Yes" || ans == "yes" || ans == "YES")
    {
        cout<<"\nLet's play..."<<endl;

        cout<<"\n*******************"<<endl;
            cout<<"*  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  *"<<endl;
            cout<<"*-----------------*"<<endl;
            cout<<"*  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  *"<<endl;
            cout<<"*-----------------*"<<endl;
            cout<<"*  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  *"<<endl;
            cout<<"*******************"<<endl;

        while(winner=="\0")
        {
            if(var%2==0)
            {
                cout<<"Player 1 Enter The Position (1-9) : ";
                cin>>pos;
                while(pos > 9 || pos < 0)
                {
                    cout<<"\nPlayer 1, Please enter position between 1 to 9 !!!!"<<endl;
                    cout<<"Player 1 Enter The Position : ";
                    cin>>pos;
                }
                switch(pos){
                    case 1:
                        if(arr[0][0] == 'X' || arr[0][0] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[0][0] = 'O';
                        break;
                    case 2:
                        if(arr[0][1] == 'X' || arr[0][1] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[0][1] = 'O';
                        break;
                    case 3:
                        if(arr[0][2] == 'X' || arr[0][2] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[0][2] = 'O';
                        break;
                    case 4:
                        if(arr[1][0] == 'X' || arr[1][0] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[1][0] = 'O';
                        break;
                    case 5:
                        if(arr[1][1] == 'X' || arr[1][1] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[1][1] = 'O';
                        break;
                    case 6:
                        if(arr[1][2] == 'X' || arr[1][2] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[1][2] = 'O';
                        break;
                    case 7:
                        if(arr[2][0] == 'X' || arr[2][0] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[2][0] = 'O';
                        break;
                    case 8:
                        if(arr[2][1] == 'X' || arr[2][1] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[2][1] = 'O';
                        break;
                    case 9:
                        if(arr[2][2] == 'X' || arr[2][2] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[2][2] = 'O';
                        break;
                } 
            }
            if(var%2!=0)
            {
                cout<<"Player 2 Enter The Position (1-9) : ";
                cin>>pos;
                while(pos > 9 || pos < 0)
                {
                    cout<<"\nPlayer 2, Please enter position between 1 to 9 !!!!"<<endl;
                    cout<<"Player 2 Enter The Position : ";
                    cin>>pos;
                }
                switch(pos){
                    case 1:
                        if(arr[0][0] == 'X' || arr[0][0] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[0][0] = 'X';
                        break;
                    case 2:
                        if(arr[0][1] == 'X' || arr[0][1] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[0][1] = 'X';
                        break;
                    case 3:
                        if(arr[0][2] == 'X' || arr[0][2] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[0][2] = 'X';
                        break;
                    case 4:
                        if(arr[1][0] == 'X' || arr[1][0] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[1][0] = 'X';
                        break;
                    case 5:
                        if(arr[1][1] == 'X' || arr[1][1] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[1][1] = 'X';
                        break;
                    case 6:
                        if(arr[1][2] == 'X' || arr[1][2] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[1][2] = 'X';
                        break;
                    case 7:
                        if(arr[2][0] == 'X' || arr[2][0] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[2][0] = 'X';
                        break;
                    case 8:
                        if(arr[2][1] == 'X' || arr[2][1] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[2][1] = 'X';
                        break;
                    case 9:
                        if(arr[2][2] == 'X' || arr[2][2] == 'O')
                        {
                            cout<<"\nPlease select other position bcz it is already filled"<<endl<<endl;
                            continue;
                        }
                        arr[2][2] = 'X';
                        break;
                } 
            }
            var++;
            cout<<"\n*******************"<<endl;
            cout<<"*  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  *"<<endl;
            cout<<"*-----------------*"<<endl;
            cout<<"*  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  *"<<endl;
            cout<<"*-----------------*"<<endl;
            cout<<"*  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  *"<<endl;
            cout<<"*******************"<<endl;
            if((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') || (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') || 
                (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') ||
                (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') || (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') ||
                (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') || (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O'))
                {
                    winner="Player 1";
                    cout<<"\nCongratulations, Player 1 is winner"<<endl<<endl;
                    break;
                }
            else if((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') || (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') || 
                (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') ||
                (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') || (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') ||
                (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') || (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X'))
                {
                    winner="Player 2";
                    cout<<"\nCongratulations, Player 2 is winner"<<endl<<endl;
                    break;
                }
                else{
                    if(arr[0][0] == '_' || arr[0][1] == '_' || arr[0][2] == '_' || arr[1][0] == '_' || arr[1][1] == '_' || arr[1][2] == '_' || 
                        arr[2][0] == '_' || arr[2][1] == '_' || arr[2][2] == '_')
                        {
                            continue;
                        }
                        else
                        {
                            cout<<"Oops, No one is winner !!!";
                            break;
                        }
                }
            }
    }
    else if(ans == "No" || ans == "no"){
        cout<<"Ok no problem"<<endl;
    }
    else{
        cout<<"Please answer in yes or no"<<endl;
        main();
    }
    return 0;
}