#include <iostream>

using namespace std;

int main(){
    string str, substr; 
    while (cin >> str >> substr){
        

        int index=0;
        int num=0;
        for (int i=0; i<str.size(); i++){
            if (str[i]>num){
                index = i;
                num = str[i];
            }
        }

        //从0开始往右走index+1步
        cout << str.substr(0, index+1) + substr + str.substr(index + 1) << endl;


    }
    


    return 0;
}