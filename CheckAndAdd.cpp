#include <iostream>
#include <cstdlib>
#define DIM 30
using namespace std;

void fillList(int list[]);
void showList(int list[],int);
bool checkPair(int);
void insertNum(int ,int list[],int );
long int getMinPair(int list[],int);

int main(){
    int num[DIM];
    int pair[DIM];
    int index = 0;
    fillList(num);
    cout << "\nLista iniziale";
    showList(num,DIM);
    for (int i = 0;i < DIM;i++){
        if (checkPair(num[i])){
            insertNum(num[i],pair,index);
            index ++;
        }
    }
    cout << "\nLista numeri pari";
    showList(pair,index);
    
    cout << "\nPari ordinati :";
    for(int i= 0;i< index;i++){
        cout << "\n" << getMinPair(pair,index);
    }
}

void fillList(int list[]){
    for(int i = 0;i<DIM;i++){
        list[i] = rand()%1000;
    }
}

void showList(int list[],int dim){
    for(int i = 0;i<dim;i++){
        if (list[i] == NULL){
            continue;
        }
        cout << "\n" << list[i] ;
    }
}

bool checkPair(int n){
    return n%2 == 0;
}

void insertNum(int n,int list[],int index){
    list[index] = n;
}

long int getMinPair(int list[],int index){
    long int min;
    int index2;
    for (int i = 0;i< index;i++){
        if (list[i] != NULL){
            min = list[i];
            index2 = i;
        }
    }
    for (int i = 0;i < index;i++){
        if (list[i] == NULL){
            continue;
        }
        else if (list[i] < min){
            min = list[i];
            index2 = i;
        }
    }
    list[index2] = NULL;
    return min;
}
