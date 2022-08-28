#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int T;
    cin >> T;

    while (T--){
        string a, b;
        cin >> a >> b;

        //0:hunter 1:bear 2:gun ; 
        int x, y;
        if (a == "Hunter") x = 0;
        else if (a == "Bear") x = 1; //bear wins hunter
        else x = 2; //gun wins bear

        if (b == "Hunter") y = 0; 
        else if (b == "Bear") y = 1; //bear wins hunter
        else y = 2; //gun wins bear

        if (x == y) puts("Tie");
        else if (x == (y + 1) % 3) puts("Player1");
        else puts("Player2");

    }

    return 0;
}