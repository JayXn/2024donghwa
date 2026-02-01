//===https://www.dotcpp.com/course/515===//

// 函数名: fsetpos
// 头文件: <stdio.h>
// 函数原型: int fsetpos(FILE *stream, const fpos_t *pos);
// 功能: 用於將文件指針定位在指定的位置上，fsetpos 將與 stream 相聯的文件指針的位置保存在 pos 所指的地方。
// 參 數：FILE *stream     要定位的文件流
//        const fpos_t *pos    類型 fpos_t 在 stdio.h 中定義為要定位的指針位置，typeddf long fpos_t;
// 返回值：成功   返回0 ，失敗   返回非0值。

// 程序例:  打開文件並獲取 stream 指針位置，將位置輸出
#include<stdio.h>
#include<string.h>
 
int main(void){
 
   char string[] = "www.dotcpp.com";
   fpos_t filepos;
   FILE *stream = fopen("test.txt", "w+");
 
   fwrite(string, strlen(string), 1, stream); // 將字符串寫入文件流中
 
   fgetpos(stream, &filepos);  // 獲取文件的指針位置
 
   printf("The file pointer is at byte %ld\n", filepos);
 
   fclose(stream);
 
   return 0;
 
}

// 運行結果
// The file pointer is at byte 14
