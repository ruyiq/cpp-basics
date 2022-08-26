#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    
    for (int i=1; i<=N; i++){
        int x,y;
        int sum=0;

        cin >>x >>y;
        if (x>y) swap(x,y);
        for (int j=x+1; j<y; j++){
            if (j%2 ==0) continue;
            sum += j;
        }
     cout << sum <<endl;
    }

   
    return 0;
}