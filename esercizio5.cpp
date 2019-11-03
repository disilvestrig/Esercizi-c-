//A scelta dell'utente, calcola il fattoriale di un numero, la somma dei primi N numeri pari (con N inserito da tastiera) o l'mcd tra due numeri
#include <iostream>
using namespace std;

int main() {
  int choose;
  cout << "Vuoi effettuare un fattoriale(digita 1), la somma dei primi N pari (digita 2) o il mcd tra 2 numeri (digita 3)\n";
  cin >> choose;
  if (choose == 1){
    int N ;
    long long int fattoriale = 1;
    cout << "\nInserisci il numero su cui calcolare il fattoriale\n";
    cin >> N;
    for (int i = 1; i <= N; i++){
      fattoriale = fattoriale*i;
    }
    cout << "\n!" << N << " = " << fattoriale;

  }
  else if(choose == 2){
    int npari,counter,numero,somma;
    cout << "\nQuanti numeri pari vuoi sommare?\n";
    cin >> npari;
    counter = 0;
    numero = 0;
    somma = 0;
    while (counter < npari){
      if (numero %2 == 0){
        somma += numero;
        counter += 1;
      }
      numero += 1;
    }
    cout << "La somma dei primi "<< npari <<" numeri pari è "<< somma;
  }
  else if(choose == 3){
    int n1,n2,minor,mcd;
    cout << "\nInserisci i 2 numeri di cui vuoi trovare l'MCD\n";
    cin >> n1;
    cout << "\n";
    cin >> n2;
    mcd = 1 ;
    if (n1 <= n2){
      minor = n1;
    }
    else {
      minor = n2;
    }
    for (int d = 1;d <= minor ; d++){
      if (n1 % d == 0 && n2 % d == 0){
        mcd = d;
      }
    }
    cout << "\nMCD = " << mcd;
  }
}
