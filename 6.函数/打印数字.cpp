#include <iostream>
using namespace std;

void print(int a[], int size){
    for (int i=0; i<size; i++){
        cout << a[i] << ' ';
    }
    cout << endl;

}

int main(){
    int n,s;
    cin >> n >> s;
    int a[1000];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    print(a,s);

    return 0;
}