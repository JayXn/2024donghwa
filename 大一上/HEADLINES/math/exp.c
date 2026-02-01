/*======https://www.dotcpp.com/course/469======*/

// 函数名: exp
// 头文件：<math.h>
// 函数原型: double exp(double x);
// 功 能: 求底数e的x次方
// 参数: double x 为要操作的指数
// 返回值: 返回底数e的x的次方值
// 注意：自然数e为常数2.71828

// 程序例：求底数e的x次方值，并将结果输出 
#include <stdio.h>
#include <math.h>

int main(void) {
    double result;
    double x = 4.0;  
    result = exp(x);
    printf("'e' raised to the power of %lf (e ^ %lf) = %lf\n", x, x, result);

    return 0;
}
// 运行结果：
// 'e' raised to the power of 4.000000 (e ^ 4.000000) = 54.598150
