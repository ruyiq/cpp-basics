#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int V;
    cin >> V;
    int N[10];
    N[0]=V;
    printf("N[0] = %d \n", V);
    for (int i=1; i<10; i++){
        N[i]=N[i-1]*2;
        printf("N[%d] = %d \n", i, N[i]);
    }
    return 0;
}