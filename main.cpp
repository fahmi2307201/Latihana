#include <iostream>
using namespace std;
int main () {

  double x, y, a, b, phi;

  phi=3.1415;


  cout << "Masukkan nilai jari-jari tabung = ";
  cin >> x ;
  cout << "Masukkan nilai tinggi tabung = ";
  cin >> y ;

  a = phi*x*x;
  b = a*y;

  cout << "Luas Tabung adalah " << a << endl;
  cout << "Volume Tabung adalah " << b << endl;
  getchar ();
    
}