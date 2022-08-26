#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int X[10]; //initialize a array of length 10
    // put the inputted values into the array
    for (int i=0; i<10; i++){
        cin >> X[i];
    } 
    //replace the negative values in the array with 1
    for (int i=0; i<10; i++){
        if (X[i]<1) X[i]=1;
        printf("X[%d] = %d \n", i, X[i]);
    } 

    return 0;
}