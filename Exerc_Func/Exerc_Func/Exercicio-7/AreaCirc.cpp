#include <iostream>
using namespace std;

double AreaCirc(float r){
    return 3.14 * (r*r);
}

int main(){
    int raio;
    cin >> raio;

    cout << "A area do circulo eh: " << AreaCirc(raio) << endl;
}