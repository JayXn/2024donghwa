//https://www.dotcpp.com/course/498//

//example :void clearerr(FILE *stream);
//function:复位错误标志
//return  :没有返回值
//explain :clearerr的作用是使文件错误标志和文件结束标志置为0.假设在调用一个输入输出函数时出现了错误，ferror函数值为一个非零值。在调用clearerr（fp）后，ferror（fp）的值变为0。

#include<stdio.h>
 
int main(void){
 
   FILE *fp;
 
   char ch;
 
   fp = fopen("1.txt", "w"); //以只写的方式打开文件，此文件是不可读的
 
   ch = fgetc(fp);  //读取文件的一个字符
 
   printf("%c\n",ch);
 
   if (ferror(fp)){  //判断文件流是否出现错误
 
      printf("Error reading from 1.txt\n");  //输出错误信息
 
      clearerr(fp); //复位错误指针
 
   }
 
   fclose(fp);  //关闭文件
 
   return 0;
 
}