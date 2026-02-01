//===https://www.dotcpp.com/course/523:===//

// 函数名: perror
// 头文件: <stdio.h>
// 函数原型: void perror(char *str);
// 功能: 输出系统错误信息
// 参数：str 为要输出的错误信息
// 返回值：没有返回值

// 程序例: 打开一个不存在的文件 perror.dat，输出错误信息
#include<stdio.h>
 
int main(void){
 
   FILE *fp = fopen("perror.dat", "r");
 
   if (!fp){
 
      perror("Unable to open file for reading");
   }
 
   return 0;
}
 
// 运行结果
// Unable to open file for reading: No such file or directory
