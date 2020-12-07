#include <iostream>
#include <cstdlib>
using namespace std;

long int getNum();
bool guess(int);

int main()
{
    while (true){
    int num = getNum();
    for ( int i = 0;i< 11 ; i++){
        if (guess(num)){
            cout << "\nEsatto , hai vinto";
            break;
        }
        cout << "\nAttempts left : " << 10-i;
        
    }
    cout << "\nIl numero era " << num;
    int choice;
    cout << "\nVuoi giocare ancora (digita 1 per sì, altri numeri per no)? ";
    cin >> choice;
    if (choice != 1){
        cout << "\nOkay alla prossima";
        break;
    }
}
}


long int getNum(){
    return rand()%9999;
}
bool guess(int num){
    int attempt;
    cout << "\nA che numero sto pensando ? ";
    cin >> attempt;
    if (attempt < num){
        cout << "\nE' più grande";
    }
    else if (attempt > num){
        cout << "\nE' più piccolo";
    }
    return num == attempt;
}
