#include <bits/stdc++.h>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;
int HowManyPoints(char a, char b){
    int point=0;
    if(b=='X')
        point+=0;
    if(b=='Y')
        point+=3;
    if(b=='Z')
        point+=6;
    if(a=='A'){
        if(b=='X')
            point+=3;
        if(b=='Y')
            point+=1;
        if(b=='Z')
            point+=2;
    }
    if(a=='B'){
        if(b=='X')
            point+=1;
        if(b=='Y')
            point+=2;
        if(b=='Z')
            point+=3;
    }
    if(a=='C'){
        if(b=='X')
            point+=2;
        if(b=='Y')
            point+=3;
        if(b=='Z')
            point+=1;
    }
    return point;
}
int main(int argc, char** argv)
{
    ifstream myfile; 
    myfile.open("input.txt");
    string line;
    char player, me;
    int points;
    int i=0;
    while(myfile.good()){
        getline(myfile, line);
        player=line[0];
        me=line[2];
        //cout<<player<<" "<<me<<"\n";
        points=points+HowManyPoints(player,me);
    }
    cout<<points;
    return 0;
}