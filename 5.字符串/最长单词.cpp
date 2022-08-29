#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string res, str;

    while (cin >> str)
    {
        if (str.back() == '.') str.pop_back();
        if (str.size() > res.size()) res = str;
    }

    cout << res << endl;

    return 0;
}

/*
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
    string res , str , s;
    getline(cin,str);
    stringstream ssin(str);

    while(ssin>>s){
        if(s.back()=='.')s.pop_back();
        if(s.size()>res.size()) res = s;
    }

    cout<<res<<endl;
    return 0;
}

*/

/*
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string s, str, res;
    getline(cin, s);
    s = s.substr(0, s.size()-1); //s.pop_back(); remove the period
    stringstream ssin(s);
    int ans = 0;
    while(ssin >> str){
        if(ans < str.size()){
            ans = str.size();
            res = str;
        }
    }

    cout << res;
    return 0;;
}
*/