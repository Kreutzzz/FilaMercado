#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>

using namespace std;

template <typename TIPO>
struct Cliente{
    TIPO Nome;
    int tempo;
};

void geranome(Cliente<string> &Cliente){
  int j=rand()%20;
  switch (j) {
  case 0: Cliente.Nome="Jacicleide";
      break;
  case 1: Cliente.Nome="Jacicleide";
      break;
  case 2: Cliente.Nome="Jacicleide";
      break;
  case 3: Cliente.Nome="Jacicleide";
      break;
  case 4: Cliente.Nome="Jacicleide";
      break;
  case 5: Cliente.Nome="Jacicleide";
      break;
  case 6: Cliente.Nome="Jacicleide";
      break;
  case 7: Cliente.Nome="Jacicleide";
      break;
  case 8: Cliente.Nome="Jacicleide";
      break;
  case 9: Cliente.Nome="Jacicleide";
      break;
  case 10: Cliente.Nome="Jacicleide";
      break;
  case 11: Cliente.Nome="Jacicleide";
      break;
  case 12: Cliente.Nome="Jacicleide";
      break;
  case 13: Cliente.Nome="Jacicleide";
      break;
  case 14: Cliente.Nome="Jacicleide";
      break;
  case 15: Cliente.Nome="Jacicleide";
      break;
  case 16: Cliente.Nome="Jacicleide";
      break;
  case 17: Cliente.Nome="Jacicleide";
      break;
  case 18: Cliente.Nome="Jacicleide";
      break;
  case 19: Cliente.Nome="Jacicleide";
      break;
  }
}



#endif // CLIENTE_H
