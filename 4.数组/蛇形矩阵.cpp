#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int M[n][m];
    //then the new x= x+dx[d] where d is the direction represented by numbers 0-3;
    int dy[] = {1,0,-1,0}, dx[]={0,1,0,-1};
    // let's start from the origin (0,0)
    int x=0, y=0, d=0;

    // note that for each step we make, the value raises from 1 by 1 each time. 
    for (int i=1; i<=n*m;i++){
        M[x][y] = i;
        int a = x + dx[d];
        int b = y + dy[d];
        //check whether we need to change direction
        if (a<0||a>=n||b<0||b>=m||M[a][b]){
            d = (d+1)% 4;
            a = x + dx[d];
            b = y + dy[d];
        }
        x=a; //we need make sure we change a and b to our current position.
        y=b;
    }
    
    // now, print the results out.
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << M[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}