//===https://www.dotcpp.com/course/508===//

//函数名: fpritnf 
//头文件：<stdio.h> 
//用法:  int fprintf(FILE *stream, char *format[, argument,...]);
//功能:   格式化输出到一个流中,照原样抄写格式串format的内容到流stream中，每遇到一个%，就按规定的格式，依次输出一个表达式argument的值到流stream中;

//参数： FILE *stream   为要输出的流，char *format[, argument,...]  要输出的格式，为可变参数  
//返回值： 成功   返回写的字符个数 ，失败   返回EOF。

// 打开test.txt文件，不存在输出错误提示

#include<stdio.h>
 
int main(void){
 
   FILE *in=fopen("D:\\test.txt", "r");
 
   FILE *out= fopen("D:\\a.txt", "w");
 
   if (!in){
 
      fprintf(stderr, "Cannot open input file.\n"); //将字符串输出到标准错误流中
 
      return 1;
 
   }
 
   if (!out){
 
      fclose(in);
 
      in=NULL;
 
      fprintf(stderr, "Cannot open output file.\n");  //将字符串输出到标准错误流中
 
      return 1;
 
   }
 
   while (!feof(in)) {
 
      fputc(fgetc(in), out);
 
   }
 
   fclose(in);
 
   in=NULL;
 
   fclose(out);
 
   out=NULL;
 
   return 0;
 
}

// 运行结果
//Cannot open input file.