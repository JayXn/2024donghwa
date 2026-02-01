//===https://www.dotcpp.com/course/524:===//

// 函数名: printf
// 头文件: <stdio.h>
// 函数原型: int printf(char *format...);
// 功能: 产生格式化输出的函数
// 参数：char *format...  要输出的格式
// 返回值：成功  返回写入的字符总数 ，失败  返回一个负数。

// 程序例: 将数字10按照十进制、八进制、十六进制的形式以及不同的长度输出
#include<stdio.h>
 
int main(void){
 
   int a=10;
 
   printf("%d,%o,%x\n", a, a, a);
 
   printf("%5d\n", a);
 
   return 0;
}
 
// 运行结果
// 10,12,a
//    10




