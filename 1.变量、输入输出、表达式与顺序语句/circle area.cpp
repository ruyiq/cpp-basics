#include <iostream>

using namespace std;

int main(){

    double radius; //考虑到float的精度 这道题一定要用double

    cin >> radius;
    printf("A = %.4lf\n", 3.14 * radius* radius);
    return 0;
}