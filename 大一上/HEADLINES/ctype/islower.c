/*======https://www.dotcpp.com/course/439======*/

// 函数名: islower
// 头文件：<ctype.h>
// 函数原型: int islower(int ch);
// 功能: 判断字符是否为小写英文字母
// 参数: int ch 待检查的字符
// 返回值: ch不是小写英文字母 返回0 ,  ch是小写英文字母 返回非0

// 程序例：判断输入的字符是否为小写英文字母
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   scanf("%c", &ch);
   if (islower(ch)) {
      printf("%c is lower alpha.", ch);
   } else {
      printf("%c is not lower alpha.", ch);
   } 
   putchar('\n');   
   return 0;  
}

// 运行结果：
// input a character:g
// g is lower alpha.
