#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int c=0, r=0, f=0;

    for (int i=1; i<=N; i++){
        int A;
        char T;
        cin >> A >> T;
        if (T =='C') c+=A;
        else if (T=='R') r+=A;
        else f+=A;
    }

    printf("Total: %d animals \n", c+r+f);
    printf("Total coneys: %d \n", c);
    printf("Total rats: %d \n", r);
    printf("Total frogs: %d \n", f);
    printf("Percentage of coneys: %.2f %% \n", c*100.0/(c+r+f));
    printf("Percentage of rats: %.2f %% \n", r*100.0/(c+r+f));
    printf("Percentage of frogs: %.2f %% \n", f*100.0/(c+r+f));
    return 0;
}