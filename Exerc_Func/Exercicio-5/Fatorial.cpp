#include <iostream>
using namespace std;

bool Natural(int num){
    return (num >= 0? true : false);
}

int Fatorial(int num){
    int resultado=1;
    for(num; num>0; num--){
        resultado*=num;
    }
    return resultado;
}

int main(){
    int num;
    cin >> num;

    if(Natural(num))
        cout << "O fatorial de " << num << " eh " << Fatorial(num) << endl;
    else
        cout << "Nao eh possivel realizar o fatorial" << endl;

    return 0;
}