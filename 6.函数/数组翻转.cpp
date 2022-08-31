#include <iostream>
using namespace std;

// for(int i=0;i<size/2;i++) swap(a[i],a[size-1-i]);

void reverse(int a[], int size){ 
    int b[1000];
    for (int i=0; i<size; i++){
        b[i] = a[i];
    }
    for (int i=0; i<size; i++){
        a[i] = b[size-i-1];
    }
}

int main(){
    int n, size;
    cin >> n >> size;
    int a[1000];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    reverse(a,size);
    for (int i=0; i<n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
/*
#include <iostream>

using namespace std;

void reverse(int a[], int size)
{
    for (int i = 0, j = size - 1; i < j; i ++, j -- ) 
        swap(a[i], a[j]);
}

int main()
{
    int a[1000];
    int n, size;

    cin >> n >> size;
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    reverse(a, size);

    for (int i = 0; i < n; i ++ ) cout << a[i] << ' ';

    return 0;
}

*/