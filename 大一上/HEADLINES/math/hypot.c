/*======https://www.dotcpp.com/course/483======*/

// 函数名: hypot
// 头文件：<math.h>
// 函数原型: double hypot(double x, double y);
// 功能: 计算直角三角形的斜边长度
// 参数：x 和 y 为直角三角形的直角边
// 返回值：返回直角三角形的斜边长度

// 程序例: 计算直角三角形的斜边长度，并输出结果
#include <math.h>
#include <stdio.h>

int main(void) {
    double x = 3.0;
    double y = 4.0;
    double result = hypot(x, y);

    printf("The hypotenuse is: %lf\n", result);

    return 0;
}
// 运行结果：
// The hypotenuse is: 5.000000
