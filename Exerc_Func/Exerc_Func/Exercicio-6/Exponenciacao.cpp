#include <iostream>
using namespace std;

bool MaiorqueZero(int num){
    return(num>=0? true : false);
}

int Exponenciacao(int base, int expoente){
    int resultado=1;
    for(int i = expoente; i>0; i--){
        resultado*=base;
    }
    return resultado;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    if(MaiorqueZero(num1) && MaiorqueZero(num2))
        cout << "A exponenciacao de " << num1 << " por " << num2 << " eh " << Exponenciacao(num1, num2) << endl;
    else
        cout << "Nao eh possivel realizar a exponenciacao" << endl;

    return 0;
}