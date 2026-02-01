//===https://www.dotcpp.com/course/505===//

//函数名: fgetpos 
//头文件：<stdio.h> 
//函数原型: int fgetpos(FILE *stream); 
//功能:    取得当前文件指针(句柄)。 
//参数： stream为要操作的文件流 
//返回值：成功  返回0 ，失败  返回非0值。 
//补充：  fgetpos把与stream相联系的文件指针的位置保存在pos所指的地方。其中，类型fpos_t在stdio.h中定义为typeddf long fpos_t;

//在文件中写入字符串，并获取当前文件的指针（句柄）,并输出该句柄

#include<stdio.h>
 
#include<string.h>
 
int main(void){
 
   FILE *stream;
 
   char string[] = "This is a test";
 
   fpos_t filepos;
 
   stream = fopen("DUMMY.FIL", "w+");
 
   fwrite(string, strlen(string), 1, stream);
 
   fgetpos(stream, &filepos);
 
   printf("The file pointer is at byte %ld\n", filepos);
 
   fclose(stream);
 
   return 0;
 
}

//运行结果
//he file pointer is at byte 14