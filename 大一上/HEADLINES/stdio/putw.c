//===https://www.dotcpp.com/course/528:===//

// 函数名: putw
// 头文件: <stdio.h>
// 函数原型: int putw(int w, FILE *stream);
// 功能: 把一字符或字送到流中
// 参 数：int w 为要输出的字符或字送到流中
//        FILE *stream 为要操作的流
// 返回值：返回输出的整数 

// 程序例:  将整数word输出到标准输出流中
#include<stdio.h>
 
int main(void){
 
   int word = 49;
 
   int res = putw(word, stdout);
 
   printf("\nThe return value is %d\n", res);
 
   return 0;
}
 
// 运行结果 
// 1
// The return value is 49


