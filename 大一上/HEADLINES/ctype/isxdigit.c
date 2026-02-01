/*======https://www.dotcpp.com/course/443======*/

// 函数名: isxdigit
// 头文件：<ctype.h>
// 函数原型: int isxdigit(int ch);
// 功能: 判断字符是否为十六进制数字(0-9)(a-f)(A-F)
// 参数: int ch 待检查的字符
// 返回值: ch不是十六进制数字 返回0 ， ch是十六进制数字 返回非0

// 程序例： 判断输入的字符是否为十六进制数字
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   scanf("%c", &ch);
   if (isxdigit(ch)) {
      printf("%c is hex digit.", ch);
   } else {
      printf("%c is not hex digit.", ch);
   } 
   putchar('\n');   
   return 0;  
}

// 运行结果：
// input a character: 
//   is space.
