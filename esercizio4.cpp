//A scelta dell'utente, calcola la somma di 10 numeri interi inseriti da tastiera o eleva un numero per un esponente inserito da tastiera
#include <iostream>
using namespace std;

int main() {
  int choose;
  cout << "Vuoi effettuare una somma di 10 interi (digita 1) o un elevamento a potenza (digita 2)\n";
  cin >> choose;
  if (choose == 1){
  int array[10];
  int somma = 0;
  for (int i = 0;i < 10; i++){
    cout << "\nInserisci numero da sommare\n";
    cin >> array[i]; 
    somma += array[i];
  }
  cout << "Somma : " << somma ;
}




  if (choose == 2){
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
}
