#include <iostream>

using namespace std;

int main(){
    double M[12][12];
    // the Cth row
    int C;
    cin >> C;
    // find the type of task
    char T;
    cin >> T;
    // make the array
    for (int i=0; i<12; i++){
        for (int j=0; j<12; j++){
            cin >> M[i][j];
        }
    }
    double sum = 0;
    // find the sum
    for (int i=0; i<12; i++){
        sum += M[i][C];
    }
    // do the task
    if (T=='M'){
        printf("%.1lf\n", sum/12.0);
    } else if (T == 'S'){
        printf("%.1lf\n", sum);
    }

    return 0;
}