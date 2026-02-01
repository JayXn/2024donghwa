/*======https://www.dotcpp.com/course/433======*/

// 函数名: isascii
// 头文件：<ctype.h>
// 函数原型: int isascii(int ch);
// 功能: 判断字符是否为ASCII码，即字符ASCII在0到127之间
// 参数: int ch 待检查的字符
// 返回值: ch不是ASCII 返回0，ch是ASCII 返回非0

// 程序例：判断输入的字符是否为ASCII字符
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   ch = getchar();
   if (isascii(ch)) {
      printf("%c is ascii.", ch);
   } else {
      printf("%c is not ascii.", ch);
   }
   putchar('\n');
   return 0;
}

// 运行结果：
// input a character:f
// f is ascii.
