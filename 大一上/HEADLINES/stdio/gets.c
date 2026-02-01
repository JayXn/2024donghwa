//===https://www.dotcpp.com/course/521===//

// 函数名: gets
// 头文件: <stdio.h>
// 函数原型: char *gets(char *str);
// 功能: 从输入流中取一字符串
// 参数： 将读取的字符串保存在 str 中
// 返回值： 成功   返回指向 str 的字符串指针 ，遇到 EOF 或发生错误   返回 NULL 指针

// 程序例:  在控制台获取字符串，并输出字符串
#include<stdio.h>
 
int main(void){
 
   char str[80];
 
   printf("Input a str:");
 
   gets(str);
 
   printf("The string input was: %s\n", str);
 
   return 0;
}
 
// 运行结果
// Input a str:www.dotcpp.com
// The string input was: www.dotcpp.com
