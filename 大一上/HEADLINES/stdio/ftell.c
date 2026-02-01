//===https://www.dotcpp.com/course/516//

// 函数名: ftell
// 头文件: <stdio.h>
// 函数原型: long ftell(FILE *stream);
// 功能: 偏移量是从文件开始算起的字节数。
// 参数：FILE *stream   需要返回指针的文件流
// 返回值：成功   返回当前文件指针的位置，出错   返回-1L，是长整数的-1值。

// 程序例:  打开文件，在向文件流输入字符串，并输出文件的长度
#include<stdio.h>
 
int main(void){
 
   FILE *stream = fopen("test.txt", "w+");
 
   if(!stream){
 
      printf("can not open the file\n");
 
      return 0;
 
   }
 
   fprintf(stream, "www.dotcpp.com");
 
   printf("The file pointer is at byte %ld\n", ftell(stream));
 
   fclose(stream);
 
   return 0;
}

// 运行结果
// The file pointer is at byte 14
