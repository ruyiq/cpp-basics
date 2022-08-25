#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double X,Y;
    cin >> X >> Y;

    if (X==0 && Y==0){
        cout << "Origem" << endl;
    } else if (X>0){
        if (Y>0){
            cout << "Q1" << endl;
        } else if (Y<0) {
            cout << "Q4" << endl;
        } else {
            cout << "Eixo X" << endl;
        }
    } else if (X<0){
        if (Y>0){
            cout << "Q2" << endl;
        } else if (Y<0) {
            cout << "Q3" << endl;
        } else {
            cout << "Eixo X" << endl;
        }
    } else {
        cout << "Eixo Y" << endl;
    }

}

/*
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    if(a==0&&b==0) cout<<"Origem";
    else if(a==0)  cout<<"Eixo Y";
    else if(b==0)  cout<<"Eixo X";
    else if(a>0&&b>0) cout<<"Q1";
    else if(a<0&&b>0) cout<<"Q2";
    else if(a<0&&b<0) cout<<"Q3";
    else if(a>0&&b<0) cout<<"Q4";
     return 0;
}

*/