/*======https://www.dotcpp.com/course/434======*/

// 函数名: isalnum
// 头文件：<ctype.h>
// 函数原型: int isalnum(int ch);
// 功能: 判断字符是否为字母或数字
// 参数: int ch 待检查的字符
// 返回值: ch不是字母或数字 返回0 ，ch是字母或数字 返回非0

// 程序例：判断输入的字符是否为字母或数字
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   scanf("%c", &ch);
   if (isalnum(ch)) {
      printf("%c is alnum.", ch);
   } else {
      printf("%c is not alnum.", ch);
   } 
   putchar('\n');
   return 0;  
}

// 运行结果：
// input a character:f
// f is alnum.
