/*======https://www.dotcpp.com/course/552======*/

// 函数名：gcvt
// 头文件：<stdlib.h>
// 函数原型：char *gcvt(double f, int n, char *c);
// 功能：把浮点数转换为字符串,四舍五入
// 参数：double f  要转换的浮点数
//       int n  为要显示的位数
//       char *c  存放结果的临时缓冲区
// 返回值：返回字符串指针,即c指针   

// 程序例：使用该函数将5.21、-103.23、0.123、4e5转换为字符串，并将其结果输出
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   double f = 5.21;
   int n = 7;
   char c[20] = {'\0'};

   char *str1 = gcvt(f, n, c);
   printf("string=%s   c=%s\n", str1, c);

   f = -103.23;
   char *str2 = gcvt(f, n, c);
   printf("string=%s   c=%s\n", str2, c);

   f = 0.123;
   char *str3 = gcvt(f, n, c);
   printf("string=%s   c=%s\n", str3, c);

   f = 4e5;
   char *str4 = gcvt(f, n, c);
   printf("string=%s   c=%s\n", str4, c);

   return 0;
}
// 运行结果
// string=5.21   c=5.21
// string=-103.23   c=-103.23
// string=0.123   c=0.123
// string=400000.   c=400000.
