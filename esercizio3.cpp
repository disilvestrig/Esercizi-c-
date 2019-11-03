//Eleva un numero intero per un esponente inserito da tastiera
#include <iostream>
using namespace std;

int main() {
  int base,esponente;
  long long int potenza;
  potenza = 1;
  cout << "Inserisci la base della potenza da calcolare\n";
  cin >> base;
  cout << "\nInserisci l'esponente\n";
  cin >> esponente;
  for (int i = 0; i < esponente; i++){
    potenza = potenza*base;
  }
  cout << "\n" << base << "^" << esponente << " = " << potenza;
}
