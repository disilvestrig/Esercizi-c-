//Inserendo 10 numeri interi, calcola quanti numeri pari sono stati inseriti
#include <iostream>
using namespace std;

int main() {
  int numeri[10];
  int npari;
  for (int i = 0;i <10;i++){
    cout << "\nInserisci il numero\n";
    cin >> numeri[i];
  }
  cout << "\nI numeri pari che hai inserito sono\n";
  for (int i = 0;i <10;i++){
    if (numeri[i]% 2 == 0){
      cout << numeri[i] << "\n";
      npari += 1;
    }
    
  }
  cout << "\nHai inserito in totale "<< npari <<" numeri pari"; 
}
