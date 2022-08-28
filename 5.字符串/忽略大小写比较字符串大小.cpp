#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;
int main()
{
    char a[100], b[100];
    cin.getline(a,100); 
    cin.getline(b,100);

    for (int i = 0; a[i]; i ++ )
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;

    for (int i = 0; b[i]; i ++ )
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;

    int t = strcmp(a, b);
    if (t == 0) puts("=");
    else if (t < 0) puts("<");
    else puts(">");

    return 0;
}

/*
#include <cstdio>
#include <cstring>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);

    for (int i = 0; a[i]; i ++ )
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;

    for (int i = 0; b[i]; i ++ )
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;

    if (a == b) puts("=");
    else if (a < b) puts("<");
    else puts(">");

    return 0;
}

*/