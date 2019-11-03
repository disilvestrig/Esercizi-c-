#include <iostream>
using namespace std;

int main() {
  int array[10];
  int somma = 0;
  for (int i = 0;i < 10; i++){
    cout << "\nInserisci numero da sommare\n";
    cin >> array[i];
    if(array[i]== 0){
      break;
    }}
  cout << "\nlettura dei dati :\n" ;
  for (int i = 0;i<10;i++){
    if (array[i]==0){
      break;
    }
    cout << "\n" << array[i]<< "\n";
    somma += array[i];
  }
  cout << "Somma : " << somma ;
}
 
