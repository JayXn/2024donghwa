//===https://www.dotcpp.com/course/513===//

//函数名: fscanf 
//头文件：<stdio.h> 
//用法:  int fscanf(FILE *stream, char *format[,argument...]);
//功能:  一个流中执行格式化输入,fscanf扫描输入字段，从流stream读入，每读入一个字段，就依次按照由format所指的格式串中取一个从%开始的格式进行格式化之后存入对应的一个地址address中。 
//参数：FILE *stream  输入数据的流           
      //char *format[,argument...]  指定的字符串格式
//返回值： 成功  返回转换和存贮输入字段的个数 ，失败  遇文件结束返回EOF。
//程序例: 从屏幕输入整数，并输出提示

#include<stdio.h>
 
#include<string.h>
 
int main(void){
 
   int i;
 
   printf("Input an integer: ");
 
   if (fscanf(stdin, "%d", &i)){
 
      printf("The integer read was: %i\n",i);
 
   }else{
 
      fprintf(stderr, "Error reading an integer from stdin.\n");
 
      exit(1);
 
   }
 
   return 0;
 
}

// 运行结果
//Input an integer: 123
//The integer read was: 123