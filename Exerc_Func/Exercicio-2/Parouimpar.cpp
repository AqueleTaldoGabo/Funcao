#include <iostream>
using namespace std;

bool Parouimpar(int valor){
    return (valor%2 == 0? true : false);
}

int main(){
    int v;
    cin >> v;

    if(Parouimpar(v))
        cout << v << " Eh par" << endl;
    else 
        cout << v << " Eh impar" << endl;

    return 0;
}