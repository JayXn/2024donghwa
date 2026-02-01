//===https://www.dotcpp.com/course/534:===//

// 函数名: tmpfile
// 头文件: <stdio.h>
// 函数原型: FILE *tmpfile(void);
// 功 能: 以二进制方式打开暂存文件
// 参数： 没有参数
// 返回值：返回指向暂存文件的指针

// 程序例: 创建一个暂存文件，将文件指针赋给tp，并以二进制方式打开，并输出提示
#include<stdio.h>
 
int main(void){
   FILE *tempfp = tmpfile();
 
   if (tempfp){
      printf("Temporary file created\n");
   }else{
      printf("Unable to create temporary file\n");
      exit(1);
   }
 
   return 0;  
}
 
// 运行结果
// Temporary file created
