#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int yc=y;
    int xc=x;
    y = xc;
    x = yc;
}

int main(){
    int x,y;
    cin >> x >>y;
    swap(x,y);
    cout << x << ' '<< y<<endl;
    return 0;
}