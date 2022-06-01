#include <stdio.h>
int main()
{
    FILE* pFile;
    float buffer[] = { 2.0 , 3.0 , 8.0 };
    pFile = fopen("test.bin" , "wb"); // 打开文件写操作
    fwrite(buffer , 1 , sizeof(buffer) , pFile); // 把浮点数组写到文件 myfile.bin
    fclose(pFile); // 关闭文件
 
    float read[3];
    pFile = fopen("myfile.bin" , "rb"); // 重新打开文件读操作
    fread(read , 1 , sizeof(read) , pFile); // 从文件中读数据
    printf("%f\t%f\t%f\n", read[0], read[1], read[2]);
 
    fclose(pFile); // 关闭文件
    return 0;
}
