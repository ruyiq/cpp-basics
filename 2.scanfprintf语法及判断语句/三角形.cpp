#include <iostream>

using namespace std;

int main(){

    double A,B,C;
    cin >> A >> B >> C;
    if (A+B<C || A+C<B || B+C<A){
        printf("Area = %.1lf\n", C*(A+B)*0.5);
    } else {
        printf("Perimetro = %.1lf\n", A+B+C);
    }
    return 0;
}