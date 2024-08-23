#include <iostream>
using namespace std;

bool Bissexto(int a){
    return ((a%4==0 && a%100!=0) || a%400==0? true : false);
}

int main(){
    int ano;
    cin >> ano;

    if(Bissexto(ano))
        cout << "O ano eh bissexto" << endl;
    else
        cout << "O ano n eh bissexto" << endl;
        
}