//使用数组实现求斐波那契数列的第 N 项。
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    int f[100]; //Initializing the array
    f[0]=0;
    f[1]=1;
    for (i=2; i<=N; i++) f[i] = f[i - 1] + f[i - 2];
    cout << f[n] << endl;
    return 0;
}