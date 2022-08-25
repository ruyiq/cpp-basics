/*
给定三个浮点数 A，B 和 C。

然后，计算如下图形的面积：

底边为 A，高为 C 的三角形。
半径 C 的圆。（π=3.14159）
底边为 A 和 B，高为 C 的梯形。
边长为 B 的正方形。
边长为 A 和 B 的长方形。
*/

#include <iostream>

using namespace std;

int main(){

    double A, B, C;

    cin >> A >> B >> C;
    printf("TRIANGULO: %.3lf\n", A*C*0.5);
    printf("CIRCULO: %.3lf\n", 3.14159*C*C);
    printf("TRAPEZIO: %.3lf\n", (A+B)*C*0.5);
    printf("QUADRADO: %.3lf\n", B*B);
    printf("RETANGULO: %.3lf\n", A*B);
    return 0;
}