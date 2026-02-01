//===https://www.dotcpp.com/course/506===//

//函数名: fgets 
//头文件：<stdio.h> 
//用法:  char *fgets(char *s, int n, FILE *stream); 
//功能:  从流中读取一字符串 
//参数：  char *s        保存读取数据的字符串 
        //int n          读n-1个字符; 
        //FILE *stream   要获取字符串的文件流 
//返回值： 成功    s所指的字符串 ，失败   出错或遇到文件结束返回NULL 
//补充：从流stream读n-1个字符，或遇换行符'\n'为止，把读出的内容，存入s中。与gets不同，fgets在s未尾保留换行符。

// 获取文件流的n-1个字符串，并将结果输出

#include<stdio.h>
 
#include<string.h>
 
int main(void){
 
   FILE *stream;
 
   char string[] = "This is a test";
 
   char msg[20]={"\0"};
 
   stream = fopen("1.txt", "w+");  
 
   fwrite(string, strlen(string), 1, stream);  //将字符串写入文件中
 
   fseek(stream, 0, SEEK_SET);  //将文件的句柄定位到文件头部
 
   fgets(msg, strlen(string)+1, stream); 
 
//从文件流中获取字符串，并将读取的字符串保留在msg中
 
   printf("%s\n", msg);
 
   fclose(stream);
 
   return 0;
 
}

// 运行结果
//This is a test