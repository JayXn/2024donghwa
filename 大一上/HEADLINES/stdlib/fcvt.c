/*======https://www.dotcpp.com/course/550======*/

// 函数名：fcvt
// 头文件：<stdlib.h>
// 函数原型：char *fcvt(double f, int n, int *p, int *c);
// 功能：将浮点数转换为字符串
// 参数：double f  要转换的浮点数
//       int n  小数点后显示的位数
//       int *p  一个指向变量返回数值的小数点的地址的指针
//       int *c  一个表示数值正负的指针
// 返回值：返回字符串指针   

// 程序例：使用该函数将5.21、-103.23、0.123、4e5转换为字符串，并将其结果输出
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   double f = 5.21;
   int p, c;
   int n = 10;
   char *str1 = fcvt(f, n, &p, &c);
   printf("string=%s\tp=%d\tc=%d\n", str1, p, c);

   f = -103.23;
   char *str2 = fcvt(f, n, &p, &c);
   printf("string=%s\tp=%d\tc=%d\n", str2, p, c);

   f = 0.123;
   char *str3 = fcvt(f, n, &p, &c);
   printf("string=%s\tp=%d\tc=%d\n", str3, p, c);

   f = 4e5;
   char *str4 = fcvt(f, n, &p, &c);
   printf("string=%s\tp=%d\tc=%d\n", str4, p, c);

   return 0;
}
// 运行结果
// string=5210000000    p=1    c=0
// string=1032300000    p=3    c=1
// string=1230000000    p=0    c=0
// string=4000000000    p=6    c=0
