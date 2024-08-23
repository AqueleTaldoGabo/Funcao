#include <iostream>
using namespace std;

float Esfera(float R){
    return (4 * 3.14 * (R*R*R))/3;
}

int main(){
    float raio;
    cin >> raio;

    cout << "O volume da esfera eh " << Esfera(raio) << endl;
}