
#include <iostream>

using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    return 0;

    // Another approach:
    // #include <cstdio>
    // scanf("%d%d", &a, &b); scanf需要判断输入输出类型。cin不需要
    // %d整数; %f浮点数; %c char变量。注意: %c会读入input里的空格。cin cout会过滤空格.
    // double: %lf; long long %lld;
    // bool : 0 or 1
    // printf("%d\n", a+b);
    // 输出想保留2位小数 printf("a+b = %.2f\n a*b=%.3f\n", a+b, a*b)

    // cin cout效率比 scanf printf效率低
    // 保留小数默认用Scanf printf
    // 开平方在 <cmath>库里 sqrt()

   
   /*
   int a = 6
   int c = a ++ 
   count << a << '' << c << endl; \implies a=6 c=7 先把a赋值给c 然后再给c+1

   int b =6
   int d = ++ b
   先给b加1再赋值给d
   count << b << '' << d << endl; \implies b=7 d=7
    */

   /*
   转换类型

   int t =97;
   char c = (char)t;
   */

    
}