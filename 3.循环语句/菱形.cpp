#include <iostream>

using namespace std;

int main(){

    int N;
    cin >> N;
    int x0= N/2;
    int y0= N/2;

    for (int i=0; i<N; i++){
         for (int j=0; j<N; j++){
            if (abs(i-x0)+abs(j-y0)<= N/2) cout << '*';
            else cout << ' ';
         } 
         cout << endl;
    }

    return 0;
}