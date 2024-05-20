#include <iostream>


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
    if (i % 2 == 0) {
      genap++;
      cout << "Genap: " << i << endl;
    } else {
      ganjil++;
      cout << "Ganjil: " << i << endl;
    }
  }

  // Menampilkan jumlah angka ganjil dan genap
  cout << "\nJumlah angka ganjil: " << ganjil << endl;
  cout << "\nJumlah angka genap: " << genap << endl;

  return 0;
}
