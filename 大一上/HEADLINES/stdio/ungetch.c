//===https://www.dotcpp.com/course/533:===//

// 函数名: ungetch
// 头文件: <stdio.h>
// 函数原型: int ungetch(int c);
// 功 能: 把一个字符退回到键盘缓冲区中 
// 参数：为要退回的字符
// 返回值： 成功  返回字符c ，失败  返回EOF
// 程序例:  将非数字的字符退回到键盘缓冲区中，并输出结果
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
 
int main( void ){
   int i=0;
   char ch;
 
   puts("Input an integer followed by a char:");
 
   while((ch = getche()) != EOF && isdigit(ch)){
      i = 10 * i + ch - 48;
   }
 
   if (ch != EOF){
      ungetch(ch);
   }
 
   printf("\ni = %d, next char in buffer = %c\n", i, getch());
 
   return 0;
}
 
// 运行结果
// Input an integer followed by a char:
// d
// i = 0, next char in buffer = d
