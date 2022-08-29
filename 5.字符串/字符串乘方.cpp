#include <iostream>

using namespace std;


int main(){
    string s;

    while (cin >> s, s!="."){
        int len_s = s.size();
        //then we know that len_a must divide len_s
        //lets find alll divisors of len_s
        for (int i=len_s; i; i--){
            // condition for divisor
            if (len_s % i==0){
                // then the first len_s/i items should be repeated i times
                string a = s.substr(0,len_s/i);
                string b;
                for (int j=1; j<=i; j++){
                    b += a;
                }

                if (s==b){
                    cout << i << endl;
                    break;
                }
            }
        }


    }

    return 0;
}