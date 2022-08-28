#include <iostream>

using namespace std;

int main(){

    char A;
    cin >> A;
    float M[12][12];
    float sum=0, c=0;
    
    for (int i=0; i<12; i++){
        for (int j=0; j<12; j++){
            cin >> M[i][j];
        }
    }

    for (int i=11; i>=7; i--){
        for (int j=12-i; j<=i-1; j++){
            sum += M[i][j];
            c+=1;
        }
    }

    if (A=='S') printf("%.1f\n", sum);
    else if (A=='M') printf("%.1f\n", sum/c);

    return 0;
}