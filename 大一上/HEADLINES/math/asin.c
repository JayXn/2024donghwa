/*======https://www.dotcpp.com/course/466======*/

// 函数名: asin
// 头文件：<math.h>
// 函数原型: double asin(double x)
// 功 能: 求正弦值为 x 的弧度数
// 参数： double x 正弦值。x 的取值必须位于区间[-1, 1]中，如果 x 的值超出此区间，将会产生域错误（domain error）
// 返回值： 正常情况下（x 的取值位于区间[-1, 1]），函数返回正弦值为 x 的角的弧度数。如果 x 的取值超出范围，那么 asin() 将发生域错误，此时返回值为 NaN。

// 程序例：求正弦值为 x 的弧度数，将结果转换为角度，并将结果输出
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
    double result;
    double x = 0.5;
    result = asin(x) * 180 / PI;
    printf("The arc sin of %lf is %lf\n", x, result);
    return 0;
}
// 运行结果：
// The arc sin of 0.500000 is 30.000000
