//===https://www.dotcpp.com/course/526:===//

// 函数名: putchar
// 头文件: <stdio.h>
// 函数原型: int putchar(int ch);
// 功能: 在stdout上输出字符
// 参数： int ch  为被写入的字符，该字符以其对应的 int 值进行传递  
// 返回值：成功   以无符号 char 强制转换为 int 的形式返回写入的字符 ，失败   返回 EOF。

// 程序例: 输出字符串 www.dotcpp.com
#include<stdio.h>
 
int main(void){
 
   putchar('w'); 
 
   putchar('w');
 
   putchar('w');
 
   putchar('.');
 
   putchar('d');
 
   putchar('o');
 
   putchar('t');
 
   putchar('c');
 
   putchar('p');
 
   putchar('p');
 
   putchar('.');
 
   putchar('c');
 
   putchar('o');
 
   putchar('m');
 
   putchar('\n');
 
   return 0;
}
 
// 运行结果
// www.dotcpp.com
