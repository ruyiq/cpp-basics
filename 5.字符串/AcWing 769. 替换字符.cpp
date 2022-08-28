#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char str[31];
    cin.getline(str, 31);
    char r;
    cin >> r;

    for (int i=0; i<strlen(str);i++){
        if (str[i]==r) str[i]='#';
    }

    puts(str);

    return 0;
}