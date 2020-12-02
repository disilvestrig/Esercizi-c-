#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string titolo;
  int 	anno;
} mio, tuo;

void printmovie (movies_t movie);

int main (){
  string mystr;
  movies_t mio;
  mio.titolo = "2001 A Space Odyssey";
  mio.anno = 1968;

  movies_t tuo;
  cout << "Inserisci titolo: ";
  getline (cin,tuo.titolo);
  cout << "Inserisci anno: ";
  getline (cin,mystr);
  stringstream(mystr) >> tuo.anno;

  cout << "IL mio film preferito :\n ";
  printmovie (mio);
  cout << "Il tuo:\n ";
  printmovie (tuo);
  return 0;
}

void printmovie (movies_t movie)
{
  cout << movie.titolo;
  cout << " (" << movie.anno << ")\n";
}
