#include <iostream>

using namespace std;

int main(){
    int X;
    cin >> X;
    if (X%2 ==1) {
        for (int i=0; i<=5; i++){
            cout << X+2*i <<endl;
        }
    } else {
        for (int i=1; i<=6; i++){
            cout << X+2*i <<endl;
        }
    }
    return 0;
}