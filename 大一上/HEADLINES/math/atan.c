/*======https://www.dotcpp.com/course/467======*/

// 函数名: atan
// 头文件：<math.h>
// 函数原型: double atan(double x);
// 功 能: 求正切值为 x 的弧度数
// 参数： double x 正切值 ，以弧度表示，区间为(-π/2, π/2)
// 返回值： 正切值为 x 的角的度数。
// 注意： atan() 是已知一个角的正切值 y，求该角的弧度值 x。由于正切的规律本可以有两个角度的但它却只返回一个，因为 atan 的值域是从 -90 到 90 也就是它只处理一四象限，所以一般使用 atan2()

// 程序例：求正切值为 x 的弧度数，将结果转换为角度,并输出结果
#include <math.h>
#include <stdio.h>

#define PI 3.14159265

int main(void) {
    double result;
    double x = 1;
    result = atan(x) * 180 / PI;
    printf("The arc tangent of %lf is %lf\n", x, result);
    return 0;
}
// 运行结果：
// The arc tangent of 1.000000 is 45.000000
