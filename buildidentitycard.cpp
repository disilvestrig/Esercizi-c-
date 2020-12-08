#include <iostream>
#define dim 20
using namespace std;

void insertName(char list[][dim],int);
void showCard(int,char list[][dim]);

int main() {
    int nome[dim][dim];
    while (true){
        printf("\nVuoi inserire nomi?(1 per sì altrimenti no) ");
        int x;
        scanf("%d", &x);
        if (x == 1){
            int y;
            printf("\nA che numero lo vuoi inserire ? ");
            scanf("%d",&y);
            insertName(nome[dim][dim],y);
            
        }
        int z;
        printf("\nVuoi visualizzare qualcosa(schiaccia 0 per uscire dal programma? ");
        scanf("%d",&z);
        if (z == 0){
            break;
        }
        else{
            showCard(z,nome[dim][dim]);
        }
    }
}

void insertName(char list[][dim],int index){
    cout << "\nNOME : ";
    scanf("%s",&list[index]);
}

void showCard(int index,char list[][dim]){
    cout << "\nPOSIZIONE : ";
    cout << "\nNOME : "<< list[index];
    
}
