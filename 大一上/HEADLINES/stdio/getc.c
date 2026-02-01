//===https://www.dotcpp.com/course/518===//

// 函数名: getc
// 头文件: <stdio.h>
// 函数原型: int getc(FILE *stream);
// 功能: 从指定的流 stream 获取下一个字符（一个无符号字符），并把位置标识符往前移动。
// 参数： FILE *stream  要读取的流
// 返回值：成功   以无符号 char 强制转换为 int 的形式返回读取的字符 ，到达文件末尾或发生读错误   返回 EOF。

// 程序例:  在控制台中获取一个字符，并将结果输出
#include<stdio.h>
 
int main(void){
 
   printf("Input a character:");
 
   char ch = getc(stdin);
 
   printf("The character input was: '%c'\n",ch);
 
   return 0;
}
 
// 运行结果
// Input a character:d
// The character input was: 'd'
