#include <iostream> 
using namespace std;

int gcd(int a, int b){
    int min;
    if (a<b) min=a;
    else min=b;

    for (int i=min; i>0; i--){
        if (a%i==0 && b%i==0) return i;
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) <<endl;

    return 0;
}

/*
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
*/