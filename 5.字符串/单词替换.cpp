#include <iostream>
#include <sstream>


using namespace std;

int main(){

    string str;
    getline(cin, str);
    cin >> a >> b;
    
    stringstream ssin(s);
    string str;
    while (ssin >> str)
        if (str == a) cout << b << ' ';
        else cout << str << ' ';

    
    return 0;
}

/*
https://blog.csdn.net/liitdar/article/details/82598039?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522161745816916780271555657%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=161745816916780271555657&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-3-82598039.first_rank_v2_pc_rank_v29&utm_term=stringstream
*/

/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, a, b, t, ans;
    getline(cin,s), getline(cin,a), getline(cin,b);
    int len = s.size();
    for(int i=0; i<len; i++){
        while(s[i]!=' ' && i < len){
            t += s[i];
            i++;
        }
        if(t == a){
            t = b;
        }
        ans += t + ' ';
        t = "";
    }
    cout << ans;
    return 0;
}

*/