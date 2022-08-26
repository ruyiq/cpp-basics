#include <iostream>

using namespace std;

int main(){

    int N;
    cin >> N;

    int X[1001];
    int p=0;
    int min=0;

    for (int i=0; i<N; i++){
        cin >> X[i];
    }

    for (int i=0; i<N; i++){
        if (X[i]<X[p]) {
           p = i;} //p是一个index的record；
    }

    printf("Minimum value: %d \n", X[p]);
    printf("Position: %d \n", p);
    return 0;
}