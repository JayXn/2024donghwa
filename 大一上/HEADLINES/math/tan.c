/*======https://www.dotcpp.com/course/477======*/

// 函数名: tan
// 头文件：<math.h>
// 函数原型: double tan(double x);
// 功能: 正切函数
// 参数：double x 为要操作的弧度
// 返回值：返回x弧度的正切值
// 公式：1°=π/180°弧度

// 程序例: 求30度的正切值
#include <math.h>
#include <stdio.h>

int main(void) {
    double result, x;
    x = 30 * PI() / 180; // 将30度角转换为弧度
    result = tan(x);
    printf("The tan of %lf is %lf\n", x, result);

    return 0;
}
// 运行结果：
// The tan of 0.523599 is 0.577350
