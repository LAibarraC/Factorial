#include<iostream>
using namespace std;

class Factorial{
    public:
    int n;
    void Calcular(int n){
        int contador=1;
        for(int i=0;i<n;i++){
            contador+=i;
        }
    }
};