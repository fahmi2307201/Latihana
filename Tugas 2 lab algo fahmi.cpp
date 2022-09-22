#include <iostream>
#define harga 45000.02
using namespace std;

int main() {
  float jumlah, total;
  cout << "Masukan jumlah barang = ";
  cin >> jumlah;
  total = harga * jumlah;
  cout << "yang harus di bayar = " << total << endl;

  return 0;
}