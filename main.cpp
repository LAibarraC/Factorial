#include<iostream>
#include"Factorial.cpp"

using namespace std;

int main() {
    Factorial f;
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    f.calcular(n);
    return 0;
}





