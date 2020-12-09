#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int getRow();
int getCol();

int getValue(int x,int y){
    cout << "\nInsert Value at coords "<< x+1 << " "<< y+1<< " : ";
    cin >> x;
    return x;
}

int main(){
    int r1 = getRow();
    int c1 = getCol();
    int x[r1][c1];
    for(int i = 0;i<r1;i++){
        for(int j = 0;j < c1;j++){
            x[i][j]=getValue(i,j);
        }
    }
    int r2 = getRow();
    int c2 = getCol();
    int y[r2][c2];
    for(int i = 0;i<r2;i++){
        for(int j = 0;j < c2;j++){
            y[i][j]=getValue(i,j);
        }
    }
    int z[r1][c2];
    while(c1 != r2){
        cout << "\nInserisci ancora i valori : le colonne della prima devono essere dello stesso numero delle righe della seconda !!!";
        r2 = getRow();
    }
    int n;
   for(int i = 0;i< r1;i++){
        for(int j = 0;j< c2;j++){
            z[i][j] = 0;
            for(int k = 0;k< r2;k++){
                z[i][j] += (x[i][k] * y[k][j]);
            }
            cout << z[i][j] << " ";
            
        }
        cout << "\n";
    }
    
}

int getRow(){
    int x;
    cout << "\nInserisci numero righe della matrice : ";
    cin >> x;
    return x;
}
int getCol(){
    int x;
    cout << "\nInserisci numero colonne della matrice : ";
    cin >> x;
    return x;
}

