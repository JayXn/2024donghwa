/*======https://www.dotcpp.com/course/436======*/

// 函数名: iscntrl
// 头文件：<ctype.h>
// 函数原型: int iscntrl(int ch);
// 功能: 判断字符是否为控制字符
// 参数: int ch 待检查的字符
// 返回值: ch不是控制字符 返回0 , ch是控制字符 返回非0

// 程序例：判断输入的字符是否是控制字符
#include <ctype.h>
#include <stdio.h>
#include <conio.h>

int main() {
   char ch;
   printf("input a character:");
   ch = getche();
   if (iscntrl(ch)) {
      printf("\n%c %d is control character.", ch, ch);
   } else {
      printf("\n%c %d is not control character.", ch, ch);
   } 
   putchar('\n');   
   return 0;  
}

// 运行结果:
// input a character:
// 26 is control character.
