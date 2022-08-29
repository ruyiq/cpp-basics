#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    while (N--)
    {
        string str;
        cin >> str;
        
        int len = str.size();
        int count = 0;
        string c;
        
        for (int i=0; i<len; i++){
            int p=i;
            while (p<len && str[p]==str[i]){
                p++;
            }
            if (p-i>count) count = p-i, c=str[i];
            i = p-1;
        }
        cout << c << ' ' << count << endl;

    }
    

    return 0;
}