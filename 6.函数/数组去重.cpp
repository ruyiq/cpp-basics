#include <iostream>
using namespace std;

// 返回数组前n个数中的不同数的个数
int get_unique_count(int a[], int n){
    int t = 0;
    
    for (int i=0; i<n; i++){
        bool is_duplicate = false;
        for (int j=0; j<i; j++){
            if (a[i] == a[j]) {
                is_duplicate = true;
                break;}
        }
        if (!is_duplicate) t += 1;
    }

    return t;
}

int main(){
    int n;
    cin >> n;
    int a[1010];
    for (int i=0; i<n;i++){
        cin >> a[i];
    }
    cout << get_unique_count(a,n) <<endl;
    return 0;
}