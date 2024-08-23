#include <iostream>
using namespace std;

float Fahreheit(float C){
    return C*9/5 + 32;
}

int main(){
    int celsius;
    cin >> celsius;

    cout << "O valor de celsius em fahreheit eh: " << Fahreheit(celsius) << endl;
}