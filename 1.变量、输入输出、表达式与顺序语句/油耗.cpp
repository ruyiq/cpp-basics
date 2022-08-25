/*
给定一个汽车行驶的总路程（km）和消耗的油量（l），请你求出汽车每消耗 1 升汽油可行驶多少公里路程。

输入格式
输入共两行，第一行包含整数 X，表示行驶总路程。

第二行包含保留一位小数的浮点数 Y，表示消耗的油量。

输出格式
输出格式为 M km/l，其中 M 为计算结果，保留三位小数。

数据范围
1≤X,Y≤109
*/

#include <iostream>

using namespace std;

int main(){

    int X;
    float Y;

    cin >> X >> Y;
    printf("%.3f km/l \n", X/Y);
    return 0;
}