/*======https://www.dotcpp.com/course/485======*/

// 函数名: atan2
// 头文件：<math.h>
// 函数原型: double atan2(double y, double x);
// 功 能: 计算 Y/X 的反正切值
// 参数： double y 代表 x 轴坐标的浮点值。
//       double x 代表 y 轴坐标的浮点值。
// 返回值： atan2 函数返回的是原点至点(x,y)的方位角，即与 x 轴的夹角。也可以理解为复数 x+yi 的辐角。返回值的单位为弧度，取值范围 为(-π,π]
// 注意： atan 和 atan2 都是求反正切函数，如：有两个点 point(x1,y1), 和 point(x2,y2);那么这两个点形成的斜率的角度计算方法分别是：
// float angle = atan( (y2-y1)/(x2-x1) );
// 或
// float angle = atan2( y2-y1, x2-x1 );
// atan2 的优点在于 如果 x2-x1 等于 0 依然可以计算，但是 atan 函数就会导致程序出错

// 程序例：求一个和两个点的反正切值，并输出结果
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
    double result;
    double x1 = 1, y1 = 1;
    result = atan2(y1, x1) * 180 / PI; // 通过一个点求正切值的弧度
    printf("atan2(%lf) is %lf\n", (y1 / x1), result);

    // 如果有两个点
    double x2 = 3, y2 = 5;
    result = atan2(y2 - y1, x2 - x1) * 180 / PI; // 通过两个点求正切值的弧度
    printf("atan2(%lf) is %lf\n", ((y2 - y1) / (x2 - x1)), result);

    return 0;
}
// 运行结果：
// atan2(1.000000) is 45.000000
// atan2(2.000000) is 63.434949
