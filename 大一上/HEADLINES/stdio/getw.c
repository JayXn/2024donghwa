//===https://www.dotcpp.com/course/522:===//

// 函数名: getw
// 头文件: <stdio.h>
// 函数原型: int getw(FILE *stream);
// 功能: 从流中取一整数
// 参数：stream 为要操作的流
// 返回值：成功   返回从流中读取的整数 ，文件结束或者出错   返回-1。

// 程序例: 在文件中写入整数 word，再从文件中读取数据，并将结果输出
#include<stdio.h>
#include<string.h>
 
#define FNAME "test.bat"
 
int main(void){
 
   FILE *fp = fopen(FNAME, "wb");
 
   if (fp == NULL) {
 
      printf("Error opening file %s\n", FNAME);
 
      exit(1);
   }
 
   int word = 94;
 
   putw(word,fp);
 
   if (ferror(fp)){
 
      printf("Error writing to file\n");
 
   }else{
 
      printf("Successful write %d\n",word);
   }
 
   fclose(fp);
 
   fp = fopen(FNAME, "rb");
 
   if (fp == NULL)   {
 
      printf("Error opening file %s\n", FNAME);
 
      exit(1);
   }
 
   word = getw(fp);
 
   if (ferror(fp)){
 
      printf("Error reading file\n");
 
   }else{
 
      printf("Successful read: word = %d\n", word);
   }
 
   fclose(fp);   
 
   return 0;
}
 
// 运行结果
// Successful write 94
// Successful read: word = 94
