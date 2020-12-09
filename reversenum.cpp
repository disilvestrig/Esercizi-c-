#include <iostream>
#include <cstdlib>
#include <string>
#define dim 20
using namespace std;

void putChar(int ,char list1[20],char);
void showNewNum(int,char list1[20]);
int getLen(char list1[20]);


int main() {
    char num[20];
    char revnum[20];
    cout << "Inserisci numero da specchiare : ";
    cin >> num;
    int len= getLen(num);
    for(int i = len;i >= 0;i--){
        putChar(len-i,revnum,num[i]);
    }
    showNewNum(len,revnum);
}

void putChar(int index,char list1[20],char let){
    list1[index] = let;
}


int getLen(char list1[20]){
    for(int i= 0;i<20;i++){
        if(list1[i] == NULL){
            return i+1;
        }
    }
}
void showNewNum(int len,char list1[20]){
    cout << "\nNumero specchiato: ";
    for(int i = 0;i<=len;i++){
        cout << list1[i];
    }
}
