#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int batas;
  int ganjil = 0;
  int genap = 0;

  // Meminta input batas
  cout << "Masukkan batas: ";
  cin >> batas;

  // Perulangan untuk memisahkan angka ganjil dan genap
  for (int i = 1; i <= batas; i++) {
    if (i % 2 == 1) 
    {
      ++ganjil;
      cout << "Ganjil: " << i << endl;
    }
  }
  cout << "\nJumlah angka ganjil: " << ganjil << endl;

  for (int i = 1; i <= batas; i++) {
    if (i % 2 == 0) {
      genap++;
      cout << "Genap: " << i << endl;
    } 
  }
  cout << "\nJumlah angka genap: " << genap << endl;
          
return 0;
}
