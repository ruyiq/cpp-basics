#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char str[110];
    cin.getline(str,200);

    int len = strlen(str);
    for (int i=0; i<len; i++){
        if (str[i]>='a' && str[i]<'z'){
            str[i] = str[i]+1;
        } else if ( str[i]=='z') str[i] = 'a';

        if (str[i]>='A' && str[i]<'Z'){
            str[i] = str[i]+1;
        } else if (str[i]=='Z') str[i] = 'A';
    }
    cout << str <<endl;

    return 0;
}

/*


#include <iostream>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    for (auto &c : s)
        if (c >= 'a' && c <= 'z') c = (c - 'a' + 1) % 26 + 'a';
        else if (c >= 'A' && c <= 'Z') c = (c - 'A' + 1) % 26 + 'A';

    cout << s << endl;

    return 0;
}


*/