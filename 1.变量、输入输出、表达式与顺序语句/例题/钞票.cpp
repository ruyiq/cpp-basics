/*
在这个问题中，你需要读取一个整数值并将其分解为多张钞票的和，每种面值的钞票可以使用多张，并要求所用的钞票数量尽可能少。

请你输出读取值和钞票清单。

钞票的可能面值有 100,50,20,10,5,2,1。
*/

#include <iostream>

using namespace std;

int main(){

    int N;
    cin >> N;
    int N100, N50, N20, N10, N5, N2, N1;
    N100 = N/100;
    N50 = N%100/50;
    N20 = (N%100)%50/20;
    int left = ((N%100)%50)%20;
    N10 = left/10;
    N5 = (left%10)/5;
    N2 = (left%5)/2;
    N1 = (left%5)%2;
    cout << N << endl;
    printf("%d nota(s) de R$ 100,00 \n", N100);
    printf("%d nota(s) de R$ 50,00\n", N50);
    printf("%d nota(s) de R$ 20,00\n", N20);
    printf("%d nota(s) de R$ 10,00\n", N10);
    printf("%d nota(s) de R$ 5,00\n", N5);
    printf("%d nota(s) de R$ 2,00\n", N2);
    printf("%d nota(s) de R$ 1,00\n", N1);

    return 0;
}