/*
外行里列。所以外层循环循环N次。内层循环M-1次。
用k计数每次在内层+1。每次外层循环内层会加M-1。第M个应该是PUM。
所以在内层循环外cout pum。同时计数加1因为PUM替代了每行最后一个数字 （i.e. M的倍数）
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    for (int i = 0, k = 1; i < N; i ++ ){
       for (int j=0; j<M-1; j++){
            cout << k << " ";
            k++;
       }
       cout << "PUM" << endl;
       k++;
    }
    return 0;
}