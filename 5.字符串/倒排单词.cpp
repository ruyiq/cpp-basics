#include <iostream>

using namespace std;

int main()
{
    string str[100];

    int n = 0;
    while (cin >> str[n]) n ++ ; //do this to read the input to the string str;

    for (int i = n - 1; i >= 0; i -- ) cout << str[i] << ' '; //then cout the string backward
    cout << endl;

    return 0;
}