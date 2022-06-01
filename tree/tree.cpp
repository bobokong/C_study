#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;

typedef struct BiTNode{
    char data;//数据域 
    struct BiTNode *lchild,*rchild;//左，右孩子 
}BiTNode,*BiTree;

//建立二叉树,前序遍历 
CreateBiTree(BiTree *T){
    char c;
    scanf("%c",&c);
    /*空格表示空指针*/
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
    printf("%c 位于第%d 层\n",c,level);
}
//前序遍历二叉树
PreOrderTraver(BiTree T, int level){
    if(T){
        visit(T->data,level);
        PreOrderTraver(T->lchild, level + 1);
        PreOrderTraver(T->rchild, level + 1);
    }
} 
int main(){
    int level = 1;//层数
    BiTree T = NULL;
    CreateBiTree(&T);
    PreOrderTraver(T,level);

    return 0;
}
