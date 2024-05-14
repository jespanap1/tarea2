#include <iostream>
using namespace std;
int variable = 5;

// Paso de parámetro "por valor" al interior de la función
void cambiarValor(int* y){
    y = &variable;
    cout << "Valor de \"x\" dentro de la funcion 1: " << *y << endl;
}

// Paso de parámetro "por referencia" al interior de la función
void cambiarValor2(int*& y){
    y = &variable;
    cout << "Valor de \"x\" dentro de la funcion 2: " << *y << endl;
}

void cambiarValor3(int &y){
    y = variable;
    cout << "Valor de \"x\" dentro de la funcion 3: " << y << endl;
}

int main() {
    int x = 12;
    int* px = &x;

    cout << "Asignacion por valor: " << endl;
    cout << "Valor de \"x\" antes de pasar por funcion 1: " << *px << endl;
    cambiarValor(px);
    cout << "Valor de \"x\" despues de pasar por funcion 1: " << *px << endl;

    cout << "\nAsignacion por referencia: " << endl;
    cout << "Valor de \"x\" antes de pasar por funcion 2: " << *px << endl;
    cambiarValor2(px);
    cout << "Valor de \"x\" despues de pasar por funcion 2: " << *px << endl;

    cout << "\nAsignacion por referencia: " << endl;
    cout << "Valor de \"x\" antes de pasar por funcion 2: " << x << endl;
    cambiarValor3(x);
    cout << "Valor de \"x\" despues de pasar por funcion 2: " << x << endl;
    cout << &x <<endl << &variable;

    return 0;
}
