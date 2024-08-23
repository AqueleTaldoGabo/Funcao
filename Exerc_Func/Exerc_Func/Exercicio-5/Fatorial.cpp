#include <iostream>
using namespace std;

bool Natural(int num){
    return (num >= 0? true : false);
}

int Fatorial(int num){
    int resultado=1;
    for(int i = num; i>0; i--){
        resultado*=i;
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