#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
    string s;
    string s1;
    string s2;
    char c;
    while(cin>>c,c!=',') s+=c;
    while(cin>>c,c!=',') s1+=c;
    while(cin>>c)s2+=c;
    if(s.size() < s1.size() || s.size()< s2.size()){
        puts("-1");
        return 0;
    }
    int l=0;
    for(;l+s1.size()<s.size();l++){
        int k =0;
        for(;k<s1.size();k++){
            if(s[l+k]!=s1[k]){
                break;
            }
        }
        if(k == s1.size()){
            break;
        }
    }

    int r=s.size()-s2.size();
    for(;r>=0;r--){
        int k =0;
        for(;k<s2.size();k++){
            if(s[r+k]!=s2[k]){
                break;
            }
        }
        if(k==s2.size()){
            break;
        }
    }


    if(l+s1.size()-1>=r)puts("-1");
    else printf("%d",r-l-s1.size());
    return 0;
}
