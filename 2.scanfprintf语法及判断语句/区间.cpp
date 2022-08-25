#include <iostream>

using namespace std;

int main(){

    double a;

    cin >> a ;

    if (a<25 && a>0){
        cout << "Intervalo" << "[0,25]" <<end;
    } else if (a=0 || a=25){
        cout << "Intervalo" << "[0,25]" <<end;
    } else if (a=50||(a<50 && a>25)){
        cout << "Intervalo" << "(25,50]" <<end;
    } else if (a=75||(a<75 && a>50)){
        cout << "Intervalo" << "(50,75]" <<end;
    } else if (a=100||(a<100 && a>75)){
        cout << "Intervalo" << "(75,100]" <<end;
    } else {
        cout << "Fora de intervalo" <<end;
    }
    return 0;
}