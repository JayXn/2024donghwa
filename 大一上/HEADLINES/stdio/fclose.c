//===https://www.dotcpp.com/course/500===//

//函数名: fclose 
//头文件：<stdio.h> 
//函数原型: int fclose(FILE *stream); 
//功能: 关闭流 stream，刷新所有的缓冲区。 
//参数： stream指定了要被关闭的流 
//返回值： 成功   返回0  ； 失败   返回EOF。

#include<stdio.h>
 
#include<string.h>
 
int main(void){
 
   FILE *fp;
 
   char buf[11] = "0123456789";
 
   fp = fopen("1.txt", "w");  //打开文件
 
   fwrite(&buf, strlen(buf), 1, fp);  //写入文件
 
   printf("write sucessful\n");
 
   fclose(fp);  //关闭文件
 
   return 0;
 
}

//运行结果： 
//write sucessful