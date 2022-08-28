#include<iostream>
using namespace std;

int main(){
    char str[101];  
    fgets(str , 101, stdin);

    for(int i= 0; str[i]; i++)
    {
        if(i == 0) cout<<str[i];
        else cout<<" "<<str[i];
    }
    return 0;
}

/*

#include <iostream>

using namespace std;

int main()
{
    string a;
    getline(cin, a);

    string b;
    for (auto c : a) b = b + c + ' ';

    b.pop_back();  // 把最后一个字符删掉

    cout << b << endl;

    return 0;
}

*/

/*

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    char str[110];
    fgets(str,110,stdin);
    for(auto c : str)
    {
        cout << c << " ";
    }

    return 0;
}

*/