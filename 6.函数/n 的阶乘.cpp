#include <iostream>
using namespace std;

int fact(int n){
    
    int res = n;
    
    while (n>1){
        res = res* (n-1);
        n--;
    }
}

int main(){
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}

/*
#include <iostream>
using namespace std;

int fact(int n){

    int res = 1;
    for (int i = 1; i <= n; i ++ )
        res *= i;
    return res;
}

int main(){
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}
*/