#include <iostream> 
using namespace std;
int n;
const int N= 1e5+10;

void merge_sort(int a[], int l, int r){

    if (l >= r) return;
    int mid = l + r >> 1;
    
    merge_sort(a,l,mid), merge_sort(a,mid+1,r);

    int temp[N];
    int k = 0, i = l, j = mid + 1; //i,j分别为左右线段起始点
    while (i <= mid && j <= r)
        if (a[i] <= a[j]) temp[k ++ ] = a[i ++ ];
        else temp[k ++ ] = a[j ++ ];
    //now consider cases where the left and the right are of different sizes
    while (i <= mid) temp[k ++ ] = a[i ++ ];
    while (j <= r) temp[k ++ ] = a[j ++ ];

    //now put values in k back to a
    for (i = l, j = 0; i <= r; i ++, j ++ ) a[i] = temp[j];

}

int main(){

    scanf("%d",&n);
    int a[N];

    for (int i=0; i<n; i++) scanf("%d", &a[i]);

    merge_sort(a,0,n-1);

    for (int i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}