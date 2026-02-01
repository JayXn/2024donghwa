/*======https://www.dotcpp.com/course/465======*/

// 函数名: acos
// 头文件：<math.h>
// 函数原型: double acos(double x);
// 功能: 求余弦值为 x 的弧度数
// 参数: double x 余弦值。x 的取值必须位于区间[-1, 1]中，如果 x 的值超出此区间，将会产生域错误（domain error）。
// 返回值: 正常情况下（x 的取值位于区间[-1, 1]），函数返回余弦值为 x 的角的弧度数。如果 x 的取值超出范围，那么 acos() 将发生域错误，此时返回值为 NaN（Not A Number）。
// 注意: acos() 是已知一个角的余弦值 y，求该角的弧度值 x。

// 程序例：求余弦值为 x 的弧度数，将结果转换为角度，并输出结果
#include <math.h>
#include <stdio.h>

#define PI 3.14159265

int main(void) {
    double result;
    double x = 0.5;
    result = acos(x) * 180 / PI;
    printf("The arc cosine of %lf is %lf\n", x, result);
    return 0;
}
// 运行结果：
// The arc cosine of 0.500000 is 60.000000
