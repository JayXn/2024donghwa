/*======https://www.dotcpp.com/course/471======*/

// 函数名: floor
// 头文件：<math.h>
// 函数原型: double floor(double x);
// 功 能: 向下舍入
// 参数：double x  为要操作的双精度值
// 返回值：返回 <=x 的用双精度浮点数表示的最大整数。

// 程序例：求浮点数number的向下取整，并将结果输出
#include <stdio.h>
#include <math.h>

int main(void) {
    double number = 123.54;
    double down, up;

    down = floor(number);
    up = ceil(number);

    printf("original number %10.2lf\n", number);
    printf("number rounded down %10.2lf\n", down);
    printf("number rounded up %10.2lf\n", up);

    return 0;
}
// 运行结果：
// original number     123.54
// number rounded down     123.00
// number rounded up     124.00
