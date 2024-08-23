    #include <iostream>
    using namespace std;


    bool Multi4(int valor){
        return (valor%4 == 0? true : false);
    }

    int main(){
        int v;
        cin >> v;

        if(Multi4(v))
            cout << v << " Eh multiplo de 4" << endl;
        else
            cout << v << " N eh multiplo de 4" << endl;
        
        return 0;
    }