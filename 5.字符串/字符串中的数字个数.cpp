#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str[101];
    int t=0;
    cin.getline(str, 101); 
    for (int i=0; i<strlen(str); i++ ){
        if (str[i]>='0' && str[i]<='9') t++;
    }

    cout << t << endl;

    return 0;
}