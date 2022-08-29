#include <iostream>
#include <string.h>

using namespace std;


int main(){
    string a,b;
    getline(cin,a);
    int len=size(a);
    for (int i=0; i<len; i++){
        b +=a[i]+a[(i+1)%len];
    }
    cout << b << endl;
    return 0;
}