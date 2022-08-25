#include <iostream>

using namespace std;

int main(){

    int a,b,h;
    cin >> a >> b;
    if (a==b){
        h = 24;
    } else{
        h = (24-a+b)%24;
    }

    printf("O JOGO DUROU %d HORA(S) \n", h);
    return 0;
}