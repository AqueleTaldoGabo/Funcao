#include <iostream>
using namespace std;

int Intervalo(int inter_min, int inter_max){
    int resultado=0;
    for(inter_min; inter_min<=inter_max; inter_min++){
        resultado+=inter_min;
    }
    return resultado;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    cout << "A soma do intervalo de " << num1 << " e " << num2 << " eh " << Intervalo(num1, num2) << endl; 

    return 0;
}