//===https://www.dotcpp.com/course/501===//

//函数名: feof 
//头文件：<stdio.h> 
//用法: int feof(FILE *stream); 
//功能: 检测流上的文件结束符。检测到文件尾标记EOF或Ctrl-z都为文件结束符。 
//参数： stream为要检测的流 
//返回值： 成功    返回非零值 ，失败    返回0。 
//补充：  feof判断文件结束是通过读取函数fread/fscanf等返回错误来识别的，故而判断文件是否结束应该是在读取函数之后进行判断。比如，在while循环读取一个文件时，如果是在读取函数之前进行判断，则如果文件最后一行是空白行，可能会造成内存错误。


//判断是否到达了文件的末尾，并输入提示
#include<stdio.h>
 
int main(void){
 
   FILE *stream;
 
   stream = fopen("1.txt", "r");
 
   fgetc(stream);
 
   if(feof(stream)){
 
      printf("We have reached end-of-file\n");
 
   }
 
   fclose(stream);
 
   return 0;
 
}

//运行结果：
//We have reached end-of-file
