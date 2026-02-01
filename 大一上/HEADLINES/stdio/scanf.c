//===https://www.dotcpp.com/course/536:===//

// 函数名: scanf
// 头文件: <stdio.h>
// 函数原型: int scanf(char *format[, argument, ...]);
// 功能: 执行格式化输入
// 参数：char *format[, argument, ...]  要输入的格式
// 返回值：输入的字符个数

// 程序例: 用于格式化输入
#include<stdio.h>
#include<string.h>
 
int main(void){
 
   int a;
 
   char b;
 
   printf("请输入数字:\n");
 
   scanf("%d", &a);
 
   getchar();
 
   printf("请输入字符:\n");
 
   scanf("%c", &b);
 
   printf("a=%d  b=%c\n", a, b);
 
   return 0;
}
 
// 运行结果
// 请输入数字:
// 12
// 请输入字符:
// c
// a=12  b=c
