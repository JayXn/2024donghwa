/*======https://www.dotcpp.com/course/435======*/

// 函数名: isalpha
// 头文件：<ctype.h>
// 函数原型: int isalpha(int ch);
// 功能: 判断字符是否为英文字母
// 参数: int ch 待检查的字符
// 返回值: ch不是英文字母 返回0 ，ch是英文字母 返回非0

// 程序例：判断输入的字符是否为英文字母
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   scanf("%c", &ch);
   if (isalpha(ch)) {
      printf("%c is alpha.", ch);
   } else {
      printf("%c is not alpha.", ch);
   } 
   putchar('\n');   
   return 0;  
}

// 运行结果:
// input a character:f
// f is alpha.

