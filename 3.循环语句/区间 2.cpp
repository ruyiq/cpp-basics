#include <iostream>

using namespace std;

int main(){
    int N, t1=0, t2=0;
    cin >> N;
    for (int i=1; i<=N; i++){
        int Xi;
        cin >> Xi;
        if (Xi>=10 && Xi<=20) t1+=1;
        else t2+=1;
    }

    printf("%d in \n", t1);
    printf("%d out \n", t2);
    return 0;
}