#include <iostream>

using namespace std;

int main(){
    char a[101];
    fgets(a,101,stdin);
    cout << strlen(a) << endl;
    // for(int i = 0;s[i] && s[i] != '\n';i ++) c ++;
    return 0;
}
/*
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    cout << s.size() << endl;
    return 0;
}

*/