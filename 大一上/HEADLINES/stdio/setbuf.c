//===https://www.dotcpp.com/course/537:===//

// 函数名: setbuf
// 头文件: <stdio.h>
// 函数原型: void setbuf(FILE *stream, char *buf);
// 功能: 把缓冲区与流相联，实现操作缓冲区时直接操作了文件流的功能
// 参数：FILE *stream  为要处理的流
//       char *buf     为要处理的缓冲区
// 返回值：没有返回值

// 程序例: 将标准文件流指定缓冲区 outbuf
#include<stdio.h>
 
char outbuf[BUFSIZ];
 
int main(void){
 
   setbuf(stdout, outbuf);  //将缓冲区与流相关联
 
   puts("This is a test of buffered output.\n\n");  //将字符写入缓冲区
 
   puts("This output will go into outbuf\n");
 
   puts("and won't appear until the buffer\n");
 
   puts("fills up or we flush the stream.\n");
 
   fflush(stdout);  //刷新缓冲区
 
   return 0;
}
 
// 运行结果
// This is a test of buffered output.
//   
//   
// This output will go into outbuf
// 
// and won't appear until the buffer
// 
// fills up or we flush the stream.
