/*======https://www.dotcpp.com/course/440======*/

// 函数名: isprint
// 头文件：<ctype.h>
// 函数原型: int isprint(int ch);
// 功能: 判断字符是否为可打印字符（含空格）
// 参数: int ch 待检查的字符
// 返回值: ch不是可打印字符 返回0 ， ch是可打印字符（含空格） 返回非0

// 程序例： 判断输入的字符是否为可打印字符（含空格）
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   scanf("%c", &ch);
   if (isprint(ch)) {
      printf("%c is print character.", ch);
   } else {
      printf("%c is not print character.", ch);
   } 
   putchar('\n');   
   return 0;  
}

// 运行结果：
// input a character:g
// g is print character.
