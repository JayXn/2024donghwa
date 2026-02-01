//===https://www.dotcpp.com/course/531:===//

// 函数名: rewind
// 头文件: <stdio.h>
// 函数原型: int rewind(FILE *stream);
// 功能: 将文件指针重新指向一个流的开头
// 参数： FILE *stream  要操作的流
// 返回值：没有返回值    

// 程序例: 即将字符串写入文件，获取文件指针的长度，再调用 rewind 函数，获取文件
// 指针的长度，并将结果输出
#include<stdio.h>
 
int main(void){
 
   FILE *fp = fopen("D:\\a.txt", "w+");
 
   if (!fp){
 
      printf("can not open the file\n");
 
      return 0;
 
   }
 
   fprintf(fp, "abcdefghijklmnopqrstuvwxyz");
 
   int first = ftell(fp);
 
   rewind(fp);
 
   int second = ftell(fp);
 
   printf("First pointer is %d, after calling rewind() is %d\n", first, second);
 
   fclose(fp);
 
   remove("D:\\a.txt");
 
   return 0;
}
 
// 运行结果
// First pointer is 26, after calling rewind() is 0.
