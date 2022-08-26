#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    double M[12][12];
    char A;
    cin >> A;
    //read the data 
    for (int i=0; i<12; i++){
        for (int j=0; j<12; j++){
            cin >> M[i][j];
        }
    }
    //find the sum
    double sum = 0;
    double half = 0;
    for (int i=0; i<12; i++){
        for (int j=0; j<=10-i; j++){
            sum += M[i][j];
            half ++;
        }
    }
    //Do the tasks
    if (A == 'S') printf("%.1lf\n", sum);
    else if (A == 'M') printf("%.1lf\n", sum/half);


    return 0; 

}