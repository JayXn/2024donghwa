/*======https://www.dotcpp.com/course/444======*/

// 函数名: isupper
// 头文件：<ctype.h>
// 函数原型: int isupper(int ch);
// 功能: 判断字符是否为大写英文字母
// 参数: int ch 待检查的字符
// 返回值: ch不是大写英文字母 返回0 ，ch是大写英文字母 返回非0

// 程序例： 判断输入的字符是否为大写英文字母
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   scanf("%c", &ch);
   if (isupper(ch)) {
      printf("%c is upper.", ch);
   } else {
      printf("%c is not upper.", ch);
   } 
   putchar('\n');   
   return 0;  
}

// 运行结果
// input a character:G 
// G is upper.
