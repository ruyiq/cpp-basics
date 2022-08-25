#include <iostream>

using namespace std;

int main(){
    int N, h, m, s;
    cin >> N;
    h = N/3600;
    m = (N%3600)/60;
    s = N%60;

    printf("%d:%d:%d \n", h,m,s);
    return 0;
}