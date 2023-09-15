#include <bits/stdc++.h>

using namespace std;

int x, y, z;
char direction;

void forward(int &x, int &y, int &z, char &direction)
{
    if(direction=='E')
    {
        x++;
    }
    if(direction=='W')
    {
        x--;
    }
    if(direction=='N')
    {
        y++;
    }
    if(direction=='S')
    {
        y--;
    }
    if(direction=='U')
    {
        z++;
    }
    if(direction=='D')
    {
        z--;
    }
}

void backward(int &x, int &y, int &z, char &direction)
{
    if(direction=='E')
    {
        x--;
    }
    if(direction=='W')
    {
        x++;
    }
    if(direction=='N')
    {
        y--;
    }
    if(direction=='S')
    {
        y++;
    }
    if(direction=='U')
    {
        z--;
    }
    if(direction=='D')
    {
        z++;
    }
}

void left_turn(int &x, int &y, int &z, char &direction)
{
    if(direction=='E')
    {
        direction='U';
    }
    if(direction=='W')
    {
        direction='D';
    }
    if(direction=='N')
    {
        direction='W';
    }
    if(direction=='S')
    {
        direction='E';
    }
    if(direction=='U')
    {
        direction='N';
    }
    if(direction=='D')
    {
        direction='S';
    }
}

void right_turn(int &x, int &y, int &z, char &direction)
{
    if(direction=='E')
    {
        direction='D';
    }
    if(direction=='W')
    {
        direction='U';
    }
    if(direction=='N')
    {
        direction='E';
    }
    if(direction=='S')
    {
        direction='W';
    }
    if(direction=='U')
    {
        direction='S';
    }
    if(direction=='D')
    {
        direction='N';
    }
}

void up_turn(int &x, int &y, int &z, char &direction)
{
    if(direction=='E')
    {
        direction='U';
    }
    if(direction=='W')
    {
        direction='U';
    }
    if(direction=='N')
    {
        direction='U';
    }
    if(direction=='S')
    {
        direction='U';
    }
}

void down_turn(int &x, int &y, int &z, char &direction)
{
    if(direction=='E')
    {
        direction='D';
    }
    if(direction=='W')
    {
        direction='D';
    }
    if(direction=='N')
    {
        direction='D';
    }
    if(direction=='S')
    {
        direction='D';
    }
}

void solve(int &x, int &y, int &z, char &direction, char &commmand)
{
    if(commmand=='f')
    {
        forward(x,y,z,direction);
    }
    if(commmand=='b')
    {
        backward(x,y,z,direction);
    }
    if(commmand=='l')
    {
        left_turn(x,y,z,direction);
    }
    if(commmand=='r')
    {
        right_turn(x,y,z,direction);
    }
    if(commmand=='u')
    {
        up_turn(x,y,z,direction);
    }
    if(commmand=='d')
    {
        down_turn(x,y,z,direction);
    }
}

int main()
{
    cout<<"Starting Coordinates: ";
    cin>>x>>y>>z;
    
    cout<<"Starting Direction: ";
    cin>>direction;
    
    int no_of_commands;
    vector<char>commmands;
    char c;
    
    cout<<"Number of commands in array :";
    cin>>no_of_commands;
    
    cout<<"Commands: "<<endl;
    for(int i=0; i<no_of_commands; i++)
    {
        cin>>c;
        commmands.push_back(c);
    }
    
    for(int i=0; i<no_of_commands; i++)
    {
        solve(x, y, z, direction, commmands[i]);
    }
    
    cout<<"Final Position: "<<x<<" "<<y<<" "<<z<<endl;
    cout<<"Final Direction: "<<direction<<endl;
    return 0;
}