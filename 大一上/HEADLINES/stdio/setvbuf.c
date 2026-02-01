//===https://www.dotcpp.com/course/538:===//

// 函数名: setvbuf
// 头文件: <stdio.h>
// 函数原型: int setvbuf(FILE *stream, char *buf, int type, unsigned size);
// 功能: 把缓冲区与流相关
// 参数：FILE *stream 要关联的流
//       char *buf    要相关联的缓冲区
//       int type     关联的类型
//       unsigned size  关联的大小
// 返回值：成功  返回0 ，失败  返回非0 

// 程序例: 将缓冲区与流实现指定大小，指定类型的关联
#include<stdio.h>
 
int main(void){ 
 
   char bufr[512];
 
   FILE *input = fopen("file.in", "rb+");
 
   if(!input){
      printf("can not open the file\n");
   }
 
   FILE *output = fopen("file.out", "w");
 
   if(!output){
      printf("can not open the file\n");
   }
 
   if (setvbuf(input, bufr, _IOFBF, 512)){
      printf("failed to set up buffer for input file\n");
   }else{
      printf("buffer set up for input file\n");
   }
 
   if (setvbuf(output, NULL, _IOLBF, 512)) {
      printf("failed to set up buffer for output file\n");
   }else{
      printf("buffer set up for output file\n");
   }
 
   fclose(input);
   fclose(output);
 
   return 0;
}
 
// 运行结果
// can not open the file
// failed to set up buffer for input file
// buffer set up for output file
