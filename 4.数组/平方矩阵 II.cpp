#include <iostream>

using namespace std;
int n;
int main(){
    
    int N=110;
    while(cin >> n, n){
        int M[N][N];
        
        for (int i=0; i<n; i++){
            for (int j=i,k=1; j<n; j++, k++){
                M[i][j]=k;
                M[j][i]=k;
            }
        }
        
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cout << M[i][j] << ' ';
            }
            cout << endl;
        }
            cout << endl;
    }
    
       return 0;
    
}
    
    
    