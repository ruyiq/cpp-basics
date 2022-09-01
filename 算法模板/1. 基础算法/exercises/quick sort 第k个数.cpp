#include <iostream>

using namespace std;

const int N = 100010;

int q[N];

int quick_sort(int q[], int l, int r, int k)
{
    if (l >= r) return q[l];

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
     // 如果第 k 大的数在左半边，则递归左半边寻找
    if (k-1 <= j) return quick_sort(q,l, j, k);
    // 否则递归右半边
    return quick_sort(q,j + 1, r, k);
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 0; i < n; i ++ ) scanf("%d", &q[i]);

    cout << quick_sort(q, 0, n - 1, k) << endl;

    return 0;
}

//这道题的重点是别忘了x是中间值，j是中间值的index。第k个数字的index是k-1。