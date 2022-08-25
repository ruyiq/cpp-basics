#include <iostream>
#include <algorithm>


using namespace std;

int main(){

    int b = 0;
    int p;
    for (int i=1; i<=100; i++){
        int x;
        cin >> x;
        if (x>b){
            b=x;
            p=i;}
    }

    cout << b <<endl;
    cout << p <<endl;
    return 0;
}