#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int x;
    while(cin>>n, n)
    {

        for(int i=1;i<=n;i++)
        {

            for(int j=i;j<n+i;j++)
            {
                long long x=pow(2,j-1);
                cout<<x<<" ";
            }

            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}

/*

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    while (cin >> n, n)
    {
        for (int i = 0; i < n; i ++ )
        {
            for (int j = 0; j < n; j ++ )
            {
                int v = 1;
                for (int k = 0; k < i + j; k ++ ) v *= 2;
                cout << v << ' ';
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}

*/
/*

#include<iostream>
#include<cmath>

using namespace std;
const int N=15;
int g[N][N];

int main()
{
    int n;
    while(cin>>n,n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                g[i][j]=pow(2,abs(i+j));
                cout<<g[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}


*/