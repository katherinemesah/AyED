#include<iostream>
#include<cmath>
using namespace std;

/*Enunciado
a. Se desea calcular el valor de π usando la serie de Liebniz, sin usar ninguna optimización.
b. Debe iterar hasta que el valor de π se correcto en sus 6 primeros decimales (3,141592)
*/


double Liebniz() {
    int iteraciones;
    double pi = 0.0;

    for (iteraciones = 0; abs(pi - 3.141592) >= 0.000001; iteraciones++) {
        pi += (iteraciones % 2 == 0 ? 1 : -1) * 4.0 / (2 * iteraciones + 1);
    }

    return pi;
}

int main() {
    double pre_pi = Liebniz();
    cout.precision(6);

    cout << "Valor de pi calculado: "<<  pre_pi << endl;

    return 0;
}
