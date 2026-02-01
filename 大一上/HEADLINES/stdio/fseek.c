//===https://www.dotcpp.com/course/514===//

// 函数名: fseek
// 头文件: <stdio.h>
// 函数原型: int fseek(FILE *stream, long offset, int fromwhere);
// 功能: 重定位流上的文件指针，在流上重新定位文件结构的位置。fseek 設定與流 stream 相聯繫的文件指針到新的位置，新位置與 fromwhere 給定的文件位置的距離為 offset 字節。
// 參數： FILE *stream   要重定位的流
//        long offset    重定位的偏移量
//        int fromwhere  重定位的位置  
// 返回值： 成功   返回0 ，出錯或失敗   返回非0值。
// 補充： fromwhere 的取值必須是0，1或2中的一個，分別代表在 stdio.h 中定義的三個符號常量：
//            0是 SEEK_SET，是文件開始位置；
//            1是 SEEK_CUR，是當前的指針位置；
//            2時 SEEK_END，是文件末尾。
//            調用了 fseek 之後，在更新的文件位置上，下一個操作可以是輸入；也可以是輸出。

// 程序例: 打開文件，將字符串輸入到文件流 stream 中，並重定位到文件的開頭，輸出文件的長度
#include<stdio.h>
 
long filesize(FILE *stream);
 
int main(void){
 
   FILE *stream = fopen("myfile.txt", "w+");
 
   fprintf(stream, "www.dotcpp.com");
 
   fseek(stream, 0, SEEK_END);
 
   printf("Filesize of myfile.txt is %ld bytes\n", ftell(stream));
 
   fclose(stream);
 
   return 0;
 
}
 

// 運行結果
// Filesize of myfile.txt is 14 bytes
