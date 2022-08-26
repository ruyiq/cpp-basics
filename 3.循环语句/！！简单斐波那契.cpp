#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    cin >> n;
    a=0;
    b=1;
    for(int i = 0; i <= n-1; i++){
        int c;
        cout << a << " " ;
        c=a+b;
        a=b;
        b=c;
    }
    cout << endl;

    return 0;
}