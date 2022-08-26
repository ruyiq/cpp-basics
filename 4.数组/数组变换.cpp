#include <iostream>;

using namespace std;

int main(){
    int N[20];
    int M[20];

    for (int i=0; i<20; i++){
        cin >> M[i];
    }

    for (int i=0; i<20; i++){
        N[i] = M[19-i];
        printf("N[%d] = %d \n", i, N[i]);
    }
    

    return 0;
}