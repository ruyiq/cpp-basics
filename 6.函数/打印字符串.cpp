#include <iostream>
#include <string.h>
using namespace std;

void print(char str[]){
    string s="";
    for (int i=0; i<strlen(str);i++){
        s += str[i];
    }
    cout << s << endl;
}

int main(){
    char str[100];
    cin.getline(str,110);
    print(str);
    return 0;
}