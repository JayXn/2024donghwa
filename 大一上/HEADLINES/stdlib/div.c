/*======https://www.dotcpp.com/course/548======*/

// 函数名：div
// 头文件：<stdlib.h>
// 函数原型：div_t div(int x, int y);
// 功能：用于两个整数相除
// 参数：int x 为被除数
//       int y 为除数
// 返回值：返回包含商和余数的结构体
// 补充：typedef struct {
//         int quot;
//         int rem;
//       } div_t;

// 程序例：使用该函数求两个整数210和25相除的商和余数，并输出结果
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   div_t a = div(210, 25);
   printf("210 div 25 = %d remainder %d\n", a.quot, a.rem);  // 输出结果
   return 0;
}

// 运行结果
// 210 div 25 = 8 remainder 10
