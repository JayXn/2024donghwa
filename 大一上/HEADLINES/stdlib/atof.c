/*======https://www.dotcpp.com/course/543======*/

// 函数名：atof
// 头文件：<stdlib.h>
// 函数原型：double atof(const char *s);
// 功能：将字符串转换为浮点值
// 参数：const char *s 为要转换的字符串 
// 返回值：返回转换后的浮点值

// 程序例：将字符串"5257.1314"转换成浮点值，并输出字符串和转换的浮点值
#include<stdio.h>
#include<stdlib.h>

int main(void) {
   float r;
   char *s = "5257.1314";
   r = atof(s);
   printf("string = %s\nfloat = %f\n", s, r);  
   return 0;
}

// 运行结果
// string = 5257.1314
// float = 5257.131348
