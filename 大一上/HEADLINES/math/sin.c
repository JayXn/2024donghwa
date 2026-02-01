/*======https://www.dotcpp.com/course/475======*/

// 函数名: sin
// 头文件：<math.h>
// 函数原型: double sin(double x);
// 功能: 正弦函数
// 参数：double x 操作的弧度
// 返回值：返回弧度的正弦值
// 公式：1°=π/180°弧度

// 程序例: 求30度角的正弦值，并将结果输出
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
    double result, x = 30 * PI / 180; // 将30度角转换成弧度

    result = sin(x);

    printf("The sin() of %lf is %lf\n", x, result);

    return 0;
}
// 运行结果：
// The sin() of 0.523599 is 0.500000
