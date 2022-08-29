#include <iostream>
#include <string>

using namespace std;

bool check(string a, string b)
{
    int len = a.size();
    a += a; //复制字符串并连接
    //if (a.find(b) >= 0 && a.find(b) < len) return true; //判断是否包含
    if (a.find(b) != string::npos) return true; //判断a中是否包含b
    return false;
}

int main()
{
    string a, b;
    cin >> a >> b;
    if (check(a, b) || check(b, a)) cout << "true";
    else cout << "false";
    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b;
    if(a.size() < b.size()) swap(a,b);
    c =a+a;
    size_t t =c.find(b);   
    if(t != string::npos)puts("true");    
    else puts("false");
}

*/