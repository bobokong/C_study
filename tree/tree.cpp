#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;

typedef struct BiTNode{
    char data;//������ 
    struct BiTNode *lchild,*rchild;//���Һ��� 
}BiTNode,*BiTree;

//����������,ǰ����� 
CreateBiTree(BiTree *T){
    char c;
    scanf("%c",&c);
    /*�ո��ʾ��ָ��*/
    if(' '== c){
        *T = NULL;
    }else{
        *T =(BiTNode *) malloc(sizeof(BiTNode));
        (*T)->data = c;
        CreateBiTree(&(*T)->lchild);
        CreateBiTree(&(*T)->rchild);
    }
} 

visit(char c, int level){
    printf("%c λ�ڵ�%d ��\n",c,level);
}
//ǰ�����������
PreOrderTraver(BiTree T, int level){
    if(T){
        visit(T->data,level);
        PreOrderTraver(T->lchild, level + 1);
        PreOrderTraver(T->rchild, level + 1);
    }
} 
int main(){
    int level = 1;//����
    BiTree T = NULL;
    CreateBiTree(&T);
    PreOrderTraver(T,level);

    return 0;
}
