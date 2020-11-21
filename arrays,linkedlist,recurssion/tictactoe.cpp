#include<bits/stdc++.h>
using namespace std;
int X=1,O=-1,EMPTY=0,END_GAME=0,PLAY=1,Xwin=0,Owin=0;
int Board[3][3];
int turn=0;

void clearBoard(){
    cout<<"\n Number of games X win:"<<Xwin<<"\n";
    cout<<"\n Number of games O win:"<<Owin<<"\n";
    
    END_GAME=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        Board[i][j]=EMPTY;
    }
}
}

int isWin()
{
for(int i=0;i<3;i++)
{
    int sum=Board[i][0]+Board[i][1]+Board[i][2];
   if(sum==3){
        return 1;
    }
    if(sum==-3){return -1;}
}
for(int i=0;i<3;i++)
{
    int sum=Board[0][i]+Board[1][i]+Board[2][i];
   if(sum==3){
        return 1;
    }
    if(sum==-3){return -1;}
}
int sum=Board[0][0]+Board[1][1]+Board[2][2];
if(sum==3){
        return 1;
    }
    if(sum==-3){return -1;}
 sum=Board[2][0]+Board[1][1]+Board[0][2];
if(sum==3){
        return 1;
    }
    if(sum==-3){return -1;}
return 0;
}
void PlayAgain()
{clearBoard();
    cout<<"\n Do you want to paly again()...\n [y/n]";
    char ans;
    cin>>ans;
    if(ans=='y'|| ans=='Y')
    {
        PLAY=1;
    }
    else
    {
        PLAY=0;
    }
    

}
void Display()
{cout<<"\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(Board[i][j]==0)
            {
                cout<<"   ";
            }
            else if (Board[i][j]==-1)
            {
               cout<<" O ";
            }
            else {
                cout<<" X ";
            }
            if(j<2)
            {cout<<"|";}
           
        }
        if(i<2)
        cout<<"\n---+---+---\n"; 
    }
    cout<<"\n\n";
}

void add()
{ int x,y;
    if(turn%2==0){
        cout<<"\nX turn:";
        
        cin>>x>>y;x--;y--;
        if(x>2 || x<0 || y>2 || y<0)
        {
            cout<<"Index out of range.PLEASE CHOOSE AGAIN:\n";
            add();
        }
        else if (Board[x][y]!=0)
        {
            cout<<"the index is not empty .PLEASE CHOOSE AGAIN:\n";
            add();
        }
        else{turn++;
            Board[x][y]=X;
            Display();
            
            if(isWin()==1)
            {
                Xwin++;
                cout<<"                     X won the game.\n";
                END_GAME=1;
            }
        }
        
    }
    else
    {
cout<<"\nO turn:";
        
        cin>>x>>y;
        x--;y--;
        if(x>2 || x<0 || y>2 || y<0)
        {
            cout<<"Index out of range.PLEASE CHOOSE AGAIN:\n";
            add();
        }
        else if (Board[x][y]!=0)
        {
            cout<<"the index is not empty .PLEASE CHOOSE AGAIN:\n";
            add();
        }
        else{turn++;
            Board[x][y]=O;
            Display();
            
            if(isWin()==-1)
            {
                Owin++;
                cout<<"                     O won the game.\n";
                END_GAME=1;
            }
        }
    }
if(turn==9 && END_GAME==0)
{ Display();
    cout<<"The game has been tied..........";
PlayAgain();
}
else if (END_GAME==1)

{
    PlayAgain();
}



}

int main()
{
    clearBoard();
    while(PLAY==1)
    {
        add();
    }
   
}
/* how to play ??
consider this 2d matrix with index starting with 1 ,
1 1, 1 2, 1 3,

2 1, 2 2, 2 3,

3 1, 3 2, 3 3,

enter the index x and y on your alternative turns.............

Play as many number of times you want to wish




   |   |   
---+---+---
   |   |   
---+---+---
   |   |   

*/