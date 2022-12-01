#include <bits/stdc++.h>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    ifstream myfile; 
    myfile.open("input.txt");
    string line;
    int min=-1;
    int n;
    int odp=-1;
    int suma=0;
    vector <int> lista;
    while(myfile.good()){
        getline(myfile, line);
        //cout<<line<<"\n";
        if(line.empty()){
            lista.push_back(max(odp,suma));
            //cout<<suma<<"\n";
            suma=0;
        }
        else{
            n=0;
            for(int i=0; i<line.size();i++){
                n=n*10+(line[i]-48);
            }
            suma=suma+n;

        }
    }
    sort(lista.begin(), lista.end());
    /*for(int i=0;i<lista.size();i++){
        cout<<lista[i]<<"\n";
    }*/
    int z=lista.size();/*
    for(int i=z-1;i>=0;i--){
        cout<<lista[i]<<"\n";
    }*/
    odp=lista[z-1]+lista[z-2]+lista[z-3];
    cout<<odp<<"\n";
    return 0;
}