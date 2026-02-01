//===https://www.dotcpp.com/course/499===//

//函数名: ferror
//头文件：<stdio.h>
//函数原型: int ferror(FILE *stream);
//功 能: 检测流上的错误，若检测到给定流上的错误返回非0值。
//参数： stream是要检测流
//返回值：成功   返回非0值 ，失败   返回0值    

#include<stdio.h>
 
int main(void){
 
   FILE *stream;
 
   stream = fopen("1.txt", "w");  //以只写的方式打开文件，此文件是不可读的 
 
   (void) getc(stream);  //读取文件的一个字符
 
   if (ferror(stream)){   //判断流中是否有错误
 
      printf("Error reading from 1.txt\n");
 
      clearerr(stream); //复位错误指针
 
   }
 
   fclose(stream);
 
   return 0;
 
}

//运行结果：
//Error reading from 1.txt