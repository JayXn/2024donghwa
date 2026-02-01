//===https://www.dotcpp.com/course/519===//

// 函数名: getchar
// 头文件: <stdio.h>
// 函数原型: int getchar(void);
// 功能: 从stdin流中读字符 
// 参数： 没有参数
// 返回值：成功   以无符号 char 强制转换为 int 的形式返回读取的字符 ，到达文件末尾或发生读错误   返回 EOF

// 程序例: 在控制台中获取一个字符，并将输入的字符输出 
#include<stdio.h>
 
int main(void){
 
   int c;
 
   printf("Input the character:");
 
   while ((c = getchar()) != '\n')
 
   printf("The character is %c\n", c);
 
   return 0;
}
 
// 运行结果
// Input the character:d
// The character is d
