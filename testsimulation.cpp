include <iostream>
#define DIM 10
#include <cstdlib>
using namespace std;

void leggi_vettore(int list[]);
int media(int list[]);
bool checkValue(int,int);
void insertValue(int,int list[],int);
void showArray(int list[]);

int main()
{
    int num[DIM];
    int multiples[DIM];
    leggi_vettore(num);
    int divisore;
    int index = 0;
    cout << "\nInserisci il divisore : ";
    cin  >> divisore;
    cout << "LISTA INIZIALE";
    showArray(num);
    for (int i = 0;i < DIM;i++){
        if (checkValue(num[i],divisore)){
            insertValue(num[i],multiples,index);
            index ++;
        }
    }
    cout <<"\nLISTA FINALE";
    showArray(multiples);
}

void leggi_vettore(int list[]){
    for(int i = 0;i< DIM;i++){
        list[i] = rand()%200; 
        while (list[i] % 2 == 0){
            list[i] = rand()%200; 
        }
        list[i] -= 100;
    }
}

int media(int list[]){
    int media = 0;
    for (int i = 0;i<DIM;i++){
        media += list[i];
    }
    media = media / DIM;
    return media ;
}

bool checkValue(int num,int divisore){
    return num % divisore == 0;
}
void insertValue(int num,int list[],int index){
    list[index] = num;
}
void showArray(int list[]){
    for (int i = 0; i < DIM ; i++){
        if (list[i] == NULL){
            break;
        }
        else{
            cout << "\n" << list[i] ;
        }
    }
}

