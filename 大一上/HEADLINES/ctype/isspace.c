/*======https://www.dotcpp.com/course/442======*/

// 函数名: isspace
// 头文件：<ctype.h>
// 函数原型: int isspace(int ch);
// 功能: 判断字符是否为空白字符
// 参数: int ch 待检查的字符
// 返回值: ch不是空白字符 返回0 ， ch是空白字符 返回非0

// 程序例： 判断输入的字符是否为空白字符
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch;
   printf("input a character:");
   scanf("%c", &ch);
   if (isspace(ch)) {
      printf("%c is space.", ch);
   } else {
      printf("%c is not space.", ch);
   } 
   putchar('\n');   
   return 0;  
}

// 运行结果:
// input a character: 
//   is space.
