#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char str[100001];
    cin >> str;
    int cnt[26];

    for (int i=0; i<strlen(str); i++){
        //let a=0, b=1, ... then we can use the index to identity the alphabet
        cnt[str[i]-'a'] += 1;
    }

    for (int i = 0; str[i]; i ++ )
        if (cnt[str[i] - 'a'] == 1)
        {
            cout << str[i] << endl;
            return 0;
        }
    puts("no");

    return 0;
}