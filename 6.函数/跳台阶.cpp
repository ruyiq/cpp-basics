#include<iostream>
using namespace std;
int f(int x){
    if(x == 1) return 1;
    if(x == 2) return 2;
    return f(x - 1) + f(x - 2);
}
int main(void){
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
}

/*

#include <iostream>

using namespace std;

int n;
int ans;

void f(int k)
{
    if (k == n) ans ++ ;
    else if (k < n)
    {
        f(k + 1);
        f(k + 2);
    }
}

int main()
{
    cin >> n;
    f(0);
    cout << ans << endl;

    return 0;
*/