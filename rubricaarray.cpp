#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
 
string numeri[100];
string contatti[100];
 
void stampalista(string c[100] = contatti,string n[100] = numeri){
 int a = 0;
 string spazio;
 for (int i = 0;i<100;i++){
 if (n[i] != ""){
   cout << a+1 << " ) " << n[i] << " : " << c[i] << "\n";
   a = a + 1;}}
 cout << "\n\n\n\nPremi un tasto per tornare indietro";
 cin >> spazio;
 system("clear");
 }
void aggiungicontatto(string c[100] = contatti,string n[100] = numeri){
 string nome,numero;
 cout <<"\nInserisci nome del contatto : ";
 cin >> nome;
 cout << "\nInserisci numero del contatto : ";
 cin >> numero;
 
 for (int i = 0; i<100;i++){
   if (n[i] == ""){
      n[i] = numero;
      c[i] = nome;
      break ;
   }
  }
  system ("clear") ;
}
 
void eliminacontatto(string c[100] = contatti,string n[100] = numeri){
   int a = 0;
   int el;
   for (int i = 0;i<100;i++){
   if (n[i] != ""){
     cout << a+1 << " ) " << c[i] << " : " << n[i] << "\n";
     a = a + 1;}}
   cout << "\n\nDigita il numero del contatto da eliminare : " ;
   cin >> el ;
   cout << "\n" ;
   system ("clear") ;
   a = 0;
   for (int i = 0;i<100;i++){
   if (n[i] != ""){
     a = a + 1;
     }
   if (a == el){
     c[i] = "";
     n[i] = "";
   }
 }
 system ("clear") ;
}
 
 
int main() {
 
 int scelta, loop = 0;
 while (loop == 0){
 cout << "\n\n\nChe funzione vuoi applicare\n1)Stampa rubrica\n2)aggiungi contatto\n3)Elimina contatto\n4)Chiudi il programma\n" ;
 cin >> scelta;
 if (scelta == 1){
   stampalista(numeri,contatti) ;
 }
 else if (scelta == 2){
   aggiungicontatto(contatti,numeri) ;
 }
 else if (scelta == 3){
   eliminacontatto(contatti,numeri) ;
 }
 else if (scelta == 4){
   cout << "\nHai chiuso la rubrica\n";
   return 0 ;
 system("clear");
 }
}}
