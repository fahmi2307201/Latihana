#include<iostream>
#include<ctype.h>

int main()
{
  char kalimat[100];
  int i, spasi=0;
  
  std::cout << "Masukan Kalimat : ";
  std::cin.getline(kalimat, sizeof(kalimat));
  std::cout<<""<<std::endl;
  std::cout << "kata yang anda masukkan adalah: \n";
  
  for(i=0; kalimat[i]; i++)
  {
    if(isspace (kalimat[i]) || ispunct (kalimat[i]))
    {
      spasi++;
      }
    std::cout<<kalimat[i];
    }
  std::cout<<std::endl;
  
  for(i=0; kalimat[i]; i++)
  {
    if(isspace (kalimat[i]) || ispunct (kalimat[i]))
    {
      spasi++;
      }
    }
  std::cout << "dalam kalimat terdapat  " << spasi +1 <<" kata" << "\n\n";
  }
#include <iostream>

int main () {
  std::cout << "Hello World!\n";
}