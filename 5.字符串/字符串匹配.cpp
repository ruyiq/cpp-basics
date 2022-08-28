#include <iostream>
#include <string.h>
using namespace std;

int main(){
    double k;
    char a[100], b[100];
    cin >> k >> a >> b;

    double c=0;
    int len=strlen(a);
    for (int i=0; i<len; i++){
        if (a[i]==b[i]) c+=1;
    }

    if (c/len >=k) cout <<"yes" << endl;
    else cout << "no" <<endl;
    return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{
    double k;
    string a, b;
    cin >> k >> a >> b;

    int cnt = 0;
    for (int i = 0; i < a.size(); i ++ )
        if (a[i] == b[i])
            cnt ++ ;

    if ((double)cnt / a.size() >= k) puts("yes");
    else puts("no");

    return 0;
}


*/