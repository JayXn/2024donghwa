//===https://www.dotcpp.com/course/539:===//

// 函数名: sprintf
// 头文件: <stdio.h>
// 函数原型: int sprintf(char *str, char *format [,argument,...]);
// 功能: 格式化输出到字符串中
// 参数：char *str  要输出的字符串
//       char *format [,argument,...]   要输入的格式
// 返回值：返回字符串的字节数

// 程序例: 格式化输出到字符串中，并输出字符串
#include<stdio.h>
#include<math.h>
 
int main(void){
   char buffer[80];
   sprintf(buffer, "An approximation of Pi is %f", PI());
   puts(buffer);
   return 0;
}
 
// 运行结果
// An approximation of Pi is 3.141593
