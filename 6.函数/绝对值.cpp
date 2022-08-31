#include <iostream>
using namespace std;

int abs(int x){
    if (x<0) x=-x;
    return x;
}

int main(){

    int x;
    cin >> x;
    cout << abs(x) << endl;
}