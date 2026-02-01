//===https://www.dotcpp.com/course/540:===//

// 函数名: sscanf
// 头文件: <stdio.h>
// 函数原型: int sscanf(char *str, char *format[,argument,...]);
// 功能: 执行从字符串中的格式化输入
// 参数：char *str  要输入的字符串
//       char *format[,argument,...] 要输入的格式
// 返回值：已分配给字符从的空间数量

// 程序例: 用于执行字符串中的格式化输入
#include<stdio.h>
#include<string.h>
 
int main(void){
   char s1[]="9.4 8.2 7...";
   char s2[50];
   char c;
   int i;
   float f;
 
   sscanf(s1, "%s", s2);  //从缓冲区中读取数据
   sscanf(s1, "%c", &c);
   sscanf(s1, "%d", &i);
   sscanf(s1, "%f", &f);
 
   printf("string=%s\n", s1);
   printf("str=%s\n", s2);
   printf("character=%c\n", c);
   printf("integer=%d\n", i);
   printf("real=%f\n", f);
 
   return 0;
}
 
// 运行结果
// string=9.4 8.2 7...
// str=9.4
// character=9
// integer=9
// real=9.400000
