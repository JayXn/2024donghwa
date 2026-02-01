/*======https://www.dotcpp.com/course/441======*/

// 函数名: ispunct
// 头文件：<ctype.h>
// 函数原型: int ispunct(int ch);
// 功能: 判断字符是否为标点符号
// 参数: int ch 待检查的字符
// 返回值: ch不是标点符号 返回0 , ch是标点符号 返回非0

// 程序例： 判断输入的字符是否为标点符号
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   scanf("%c", &ch);
   if (ispunct(ch)) {
      printf("%c is punct.", ch);
   } else {
      printf("%c is not punct.", ch);
   } 
   putchar('\n');   
   return 0;  
}

// 运行结果:
// input a character:,
// , is punct.
