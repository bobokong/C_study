#include <stdio.h>
int main()
{
    FILE* pFile;
    float buffer[] = { 2.0 , 3.0 , 8.0 };
    pFile = fopen("test.bin" , "wb"); // ���ļ�д����
    fwrite(buffer , 1 , sizeof(buffer) , pFile); // �Ѹ�������д���ļ� myfile.bin
    fclose(pFile); // �ر��ļ�
 
    float read[3];
    pFile = fopen("myfile.bin" , "rb"); // ���´��ļ�������
    fread(read , 1 , sizeof(read) , pFile); // ���ļ��ж�����
    printf("%f\t%f\t%f\n", read[0], read[1], read[2]);
 
    fclose(pFile); // �ر��ļ�
    return 0;
}
