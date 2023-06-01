#include <iostream>
#include <cmath>
using namespace std;

/*Enunciado
a. Se desea calcular el valor de π usando la serie de Liebniz, sin usar ninguna optimización.
b. Debe iterar hasta que el valor de π se correcto en sus 6 primeros decimales (3,141592)
*/
double liebniz(){

  double numero = 4;
  double denominador = 3;
  double signo = -1;

  double unMillon = 13000000;

  while (denominador<unMillon)
  {
    numero = numero + signo*(4 / denominador);

    signo = signo * (-1);
    denominador = denominador + 2;
  }

//   4 - (4/3)

  return numero;
}

int main(){

  double pi = liebniz();
  cout.precision(7);
  cout << "El valor aproximado de pi es: " << pi << endl;
  return 0;
}
