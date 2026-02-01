//===https://www.dotcpp.com/course/512===//

//函数名: freopen
//头文件：<stdio.h> 
//用法:  FILE *freopen(char *filename, char *type, FILE *stream);
//功能:  替换一个流,用filename所指定的文件代替打开的流stream所指定的文件
//参数：  char *filename  需要被重定向的的文件路径
         //char *type      文件的打开方式
         //FILE *stream    需要被重定向的文件流
//返回值：成功   返回stream ，失败   返回NULL

//程序例: 将输出流重定位到文件OUTPUT.FIL，并输出提示

#include<stdio.h>
 
int main(void){
 
   if (freopen("D:\\out.txt", "w", stdout)== NULL){
 
      fprintf(stderr, "error redirecting stdout\n");
 
   }
 
   printf("www.dotcpp.com\n"); //原本要在控制台中输出的字符串，输出到了文件中
 
   fclose(stdout);
 
   return 0;
 
}

// 运行结果
//www.dotcpp.com