#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    //since we are given 0<=N<=60. 
    long long F[60];
    // get the array of Fab
    F[0]=0;
    F[1]=1;
    for (int j=2; j<=60;j++){
        F[j]=F[j-1]+F[j-2];
    }
    //loop over the T number of N
    for (int i=0; i<T; i++){
        int N; 
        cin >> N;
        printf("Fib(%d) = %lld \n", N, F[N]);
    }

    return 0;
}