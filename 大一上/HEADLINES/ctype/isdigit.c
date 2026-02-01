/*======https://www.dotcpp.com/course/437======*/

// 函数名: isdigit
// 头文件：<ctype.h>
// 函数原型: int isdigit(int ch);
// 功能: 判断字符是否为十进制数字
// 参数: int ch 待检查的字符
// 返回值: ch不是十进制数字 返回0 , ch是十进制数字 返回非0

// 程序例： 判断输入的字符是否为十进制数字
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   scanf("%c", &ch);
   if (isdigit(ch)) {
      printf("%c is digit.", ch);
   } else {
      printf("%c is not digit.", ch);
   } 
   putchar('\n');   
   return 0;  
}

// 运行结果:
// input a character:5
// 5 is digit.
