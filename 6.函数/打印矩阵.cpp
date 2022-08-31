#include <iostream>

using namespace std;


void print2D(int a[][100], int row, int col){
    for (int i=0; i < row; i++){
        for (int j=0; j<col; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){
    int a[100][100];
    int x, y;
    cin >> x >> y;
    
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            cin >> a[i][j];
        }
    }
    print2D(a, x, y);
    return 0;
}