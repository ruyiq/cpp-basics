#include <iostream>
using namespace std;

int lcm(int a, int b){
    for (int i=1; i<=a*b; i++){
        if ((a*i % b)==0) return a*i;
        else if ((b*i % a)==0) return b*i;
    }

}

int main(){
    int a,b;
    cin >> a >> b;
    cout << lcm(a,b) <<endl;
    return 0;
}