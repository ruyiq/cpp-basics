#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int N;
    cin >> N;

    for (int i=1; i<=N; i++){
        int X;
        cin >> X;
        if(X==1) cout << X << " is not perfect" << endl;
        else{
            int sum=0;
            for (int j=1; j<=sqrt(X); j++){
                if (X%j == 0){
                    if (j<X) sum +=j;
                    if ( j != X/j && X/j<X) sum+= X/j;
                } 
            }
            if (X==sum) cout << X << " is perfect"<< endl;
            else cout << X << " is not perfect"<< endl;
        }
        
    }
}