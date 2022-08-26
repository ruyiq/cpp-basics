#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    double M[12][12];
    int L;
    char C;
    cin >> L >> C;
    //now read the input values to the two-dimensional array
    for (int i=0; i<12; i++){
        for (int j=0; j<12; j++){
             cin >> M[i][j];
        }
    }

    //now do the tasks (S or M task)
    double sum = 0;
    for (int i=0; i<12; i++){
        sum += M[L][i];
    }
        
    if (C == 'S') printf("%.1lf\n", sum);
    else if (C == 'M') printf("%.1lf\n", sum/12.0);

    return 0;
}