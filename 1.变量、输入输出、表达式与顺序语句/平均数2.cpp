/*
读取三个浮点数 A，B 和 C 的值，对应于三个学生的成绩。

请你计算学生的平均分，其中 A 的成绩的权重为 2，B 的成绩的权重为 3，C 的成绩的权值为 5。

成绩的取值范围在 0 到 10 之间，且均保留一位小数。
*/

#include <iostream>

using namespace std;

int main(){

    float A, B, C;

    cin >> A >> B >> C;
    printf("MEDIA = %.1f \n", A*0.2+B*0.3+C*0.5);
    return 0;
}