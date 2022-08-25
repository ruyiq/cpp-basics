#include <cmath>
#include <iostream>

using namespace std;

int main(){

    int a,b,c, max1, max2;
    cin >> a >> b >> c;
    max1 = (a+b+abs(a-b))/2;
    max2 = (max1+c+abs(max1-c))/2;
    printf("%d eh o maior", max2);
    // cout << max2 << " eh o maior" << endl;
    return 0;
}