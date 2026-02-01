//===https://www.dotcpp.com/course/517===//

// 函数名: fwrite
// 头文件: <stdio.h>
// 功能: 写内容到流中，从指针ptr开始把n个数据项添加到给定输出流stream，每个数据项的长度为size个字节。
// 函数原型: int fwrite(void *ptr, int size, int nitems, FILE *stream);
// 参数：void *ptr       要写入的内容
//        int size       要写入字符的长度
//        int nitems     要写入字符的数量
//        FILE *stream   要写入的文件流
// 返回值：成功       返回确切的数据项数（不是字节数），失败出错   返回短（short）计数值。可能是0

// 程序例: 将一个结构体写入文件流
#include<stdio.h>
 
struct mystruct{
 
   int i;
 
   char ch;
 
};
 
  
 
int main(void){
 
   FILE *stream= fopen("D:\\test.txt", "wb");
 
   struct mystruct s;
 
   if (!stream){
 
      fprintf(stderr, "Cannot open output file.\n");
 
      return 1;
 
   }
 
   s.i = 0;
 
   s.ch = 'A';
 
   if(fwrite(&s, sizeof(s), 1, stream)==1){//将结构体写入文件流中
 
      printf("write to successful\n");
 
   }else{
 
      printf("write to failure\n");
 
   }
 
   fclose(stream);
 
   return 0;
}
 
// 运行结果
// write to successful
