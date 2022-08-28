#include <iostream>

using namespace std;

int main()
{
    string s;
    while (cin >> s) cout << s << ' ' ; //cin自动不录入空格

    return 0;
}

/* 第一类双指针算法

#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string r;
    for (int i = 0; i < s.size(); i ++ )
        if (s[i] != ' ') r += s[i];
        else
        {
            r += ' ';
            int j = i;
            while (j < s.size() && s[j] == ' ') j ++ ;
            i = j - 1;
        }

    cout << r << endl;

    return 0;
}



*/

/* 局部性判断方法

#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string r;
    for (int i = 0; i < s.size(); i ++ )
        if (s[i] != ' ') r += s[i];
        else
        {
            if (!i || s[i - 1] != ' ') r += ' ';
        }

    cout << r << endl;

    return 0;
}


*/