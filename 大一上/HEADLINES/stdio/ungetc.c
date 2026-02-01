//===https://www.dotcpp.com/course/532:===//

// 函数名: ungetc
// 头文件: <stdio.h>
// 函数原型: int ungetc(char c, FILE *stream);
// 功 能: 把一个字符退回到输入流中
// 参数： char c  为要退回的字符
// FILE *stream  要退回的输入流
// 返回值： 成功   返回字符 ，失败   返回 EOF，且流 stream 保持不变。

// 程序例:  输入一个字符，并将字符退回给输入流，再从输入流中获取字符
#include <stdio.h>
#include <ctype.h>
 
int main( void ){
   int i=0;
   char ch;
 
   puts("Input an integer followed by a char:");
 
   if((ch = getchar()) != EOF && isdigit(ch)){ //获取字符，如果是数字类型
      i = ch - 48;  
   }
 
   ungetc(ch, stdin);  //退回给输入缓冲区
 
   printf("i = %d, next char in buffer = %c\n", i, getchar());
 
   return 0;
}
 
// 运行结果
// Input an integer followed by a char:
// d
// i = 0, next char in buffer = d
