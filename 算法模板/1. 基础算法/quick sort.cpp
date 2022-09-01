/*
给定你一个长度为 n 的整数数列。

请你使用快速排序对这个数列按照从小到大进行排序。

并将排好序的数列按顺序输出。

输入格式: 输入共两行，第一行包含整数 n。 第二行包含 n 个整数（所有整数均在 1∼109 范围内），表示整个数列。

输出格式: 输出共一行，包含 n 个整数，表示排好序的数列。

数据范围: 1≤n≤100000=1e6
*/
/*
给定你一个长度为 n 的整数数列。

请你使用快速排序对这个数列按照从小到大进行排序。

并将排好序的数列按顺序输出。

输入格式: 输入共两行，第一行包含整数 n。 第二行包含 n 个整数（所有整数均在 1∼109 范围内），表示整个数列。

输出格式: 输出共一行，包含 n 个整数，表示排好序的数列。

数据范围: 1≤n≤100000=1e6
*/

#include <iostream>
using namespace std;



void quick_sort(int a[], int l, int r){
    if (l>=r) return;
    int i = l - 1, j = r + 1, x = a[l + r >> 1];//让i最左侧，j最右侧。
    while (i<j){
        do i ++ ; while (a[i] < x); //如果i指向的数字小于x，那么保留i指向的数字在左侧且向右移动一格。
        do j -- ; while (a[j] > x); //如果j指向的数字小于x，那么保留i指向的数字在右侧且向右移动一格。
        if (i<j) swap(a[i],a[j]); //如果i指向的数字小于j指向的数字，那么j应该在i左侧。所以swap i和j的value。
    }
    //while loop会在i和j相遇时停止。
    //截止到现在。x左侧全部小于x。x右侧全部大于x。接下来用递归分别sort左侧和右侧。
    quick_sort(a,l,j);
    quick_sort(a,j+1,r); 
}

int main(){
    int n;
    scanf("%d", &n); //读入数组大小

    const int N= 1e6+10;
    int a[N];

    for (int i=0; i<n; i++) scanf("%d", &a[i]); //读入数组

    int left = 0;
    int right = n-1;
    quick_sort(a,left, right); //quick_sort(a,0, n-1);

    for (int i=0; i<n; i++) printf("%d ", a[i]);

    return 0;
}