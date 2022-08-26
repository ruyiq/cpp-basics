#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int flag;
    while (N--){
        int X;
        cin >> X;
        int flag = 1;
        for (int i=1; i<=X; i++){
            if (!(X % i==0)) continue;
            if(i==X || i==1) continue;
            else {
                cout << X << " is not prime" << endl;
                flag = 0;
                break;
            }
        }
        if (flag == 1) cout << X << " is prime" << endl;
    }
    return 0;
}

/*
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n -- )
    {
        int p;
        cin >> p;

        bool is_prime = true;
        for (int i = 2; i * i <= p; i ++ ) //解决了1和p这两个factor。每个prime factor应该是比square root小
            if (p % i == 0)
            {
                is_prime = false;
                break;
            }

        if (is_prime) printf("%d is prime\n", p);
        else printf("%d is not prime\n", p);
    }

    return 0;
}

*/