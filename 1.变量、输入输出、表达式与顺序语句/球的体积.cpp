// 给定你一个球体的半径 R，请你计算球体的体积。

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int R;
    scanf("%d", &R);
    printf("VOLUME = %.3lf \n", (4/3.0)*3.14159*R*R*R);
    return 0;
}