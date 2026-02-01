//===https://www.dotcpp.com/course/511===//
// 函数名: fread
// 头文件: <stdio.h>
// 用法: int fread(void *ptr, int size, int nitems, FILE *stream);
// 功能: 从流中读取一字符串
// 参数：
//   void *ptr     存放读取的数据的空间
//   int size      读取的字符长度
//   int nitems    读取字符的数量
//   FILE *stream  读取的数据流
// 返回值：成功返回所读的数据项数（不是字节数），失败遇到文件结束或出错时可能返回0。
// 补充：void free(void *block); 释放先前分配的首地址为block的内存块。

// 程序例: 将字符串写入文件中去，然后再从文件中字符串，并输出结果

#include <stdio.h>
#include <string.h>

int main(void) {

    FILE *stream;
    char msg[] = "www.dotcpp.com";
    char buf[20];

    if ((stream = fopen("DUMMY.FIL", "w+")) == NULL) {
        fprintf(stderr, "Cannot open output file.\n");
        return 1;
    }

    fwrite(msg, strlen(msg) + 1, 1, stream); // 将字符串写入文件中

    fseek(stream, SEEK_SET, 0); // 定位到文件的开头部分

    fread(buf, strlen(msg) + 1, 1, stream); // 读取文件的字符串

    printf("%s\n", buf);

    fclose(stream);

    return 0;
}

// 运行结果
// www.dotcpp.com

