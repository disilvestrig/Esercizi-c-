#include <iostream>
#include <cstdlib>
#include <string>
#define dim 5
using namespace std;

void fillList(int list[dim]);
void autoFillList(int list[dim*2],int list1[dim]);
void autoFillList2(int list[dim*2],int list1[dim]);
void sortList(int list[dim*2]);
void showList(int list[dim*2]);

int main(){
    int num1[dim];
    int num2[dim];
    int num3[dim*2];
    int num4[dim*2];
    fillList(num1);
    fillList(num2);
    autoFillList(num3,num1);
    autoFillList2(num3,num2);
    sortList(num3);
    showList(num3);
}

void fillList(int list[dim]){
    cout << "\nCREAZIONE LISTA : ";
    for(int i = 0;i<dim;i++){
        cout << "\nInserisci valore :";
        cin >> list[i];
    }
}

void autoFillList(int list[dim*2],int list1[dim]){
    for(int i = 0;i< dim;i++){
        list[i] = list1[i];
    }
}
void autoFillList2(int list[dim*2],int list1[dim]){
    for(int i = 0;i<dim;i++){
        list[dim+i] = list1[i];
    }
}

void sortList(int list[dim*2]){
    int box;
    for(int i = 0;i<dim*2;i++){
        for(int j = 0;j < dim*2;j++){
           if (list[i] > list[j]){
               box = list[j];
               list[j] = list[i];
               list[i] = box;
           }
        }
    }
}



void showList(int list[dim*2]){
    cout << "\nLISTA ORDINATA :";
    for(int i = dim*2-1;i >= 0;i--){
        cout << "\n" << list[i];
    }
}
