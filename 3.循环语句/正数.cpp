#include <iostream>

using namespace std;

int main(){
    int c=0;
    
    for (int i=1; i<=6; i++){
        double a;
        cin >> a;
        if (a>0) c++;
        
    }
    
    cout << c << " positive numbers" << endl;
    return 0;
}