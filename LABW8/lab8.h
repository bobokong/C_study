// 链式队列结点结构
struct NODE_TYPE
{
    int Data;    //结点数据
	//后继结点,负责建立队列各结点之间的联系，前一个结点的pNext指向后一个结点，形成链式队列
    struct NODE_TYPE *pNext;  
};
// 链式队列结构
struct LINK_QUEUE
{
    struct NODE_TYPE *front;      //链式队列的队头指针，总是指向队列的头结点(出队一次，第二个结点变为头结点)
    struct NODE_TYPE *rear;       //链式队列的队尾指针，入队时指向新插入结点(总是指向队列的最后一个结点)
	int Length;
};
//创建空队列： pQHead为队列头结点
void InitQueue(pQHead)
struct LINK_QUEUE *pQHead;
{
    //队列头结点的队头和队尾指针申请内存
    pQHead->front=pQHead->rear = (struct NODE_TYPE *)malloc(sizeof(struct NODE_TYPE));
    if(!pQHead->front)	//检测是否申请失败
        printf("pQHead->front malloc error!\n");
    //设置头结点指针域为空
    pQHead->front->pNext = NULL;
	pQHead->Length=0;
}
//判断队列是否为空
int IsEmpty(pQHead)
struct LINK_QUEUE *pQHead;
{
    //队头指针与队尾指针相等，说明队列为空
    return(pQHead->front == pQHead->rear);
}
//新元素入队:即链式队列的尾结点指针，指向存放新元素的新结点
void Add(pQHead,x)
struct LINK_QUEUE *pQHead;
int x;
{
    //创建新结点,并申请内存
    struct NODE_TYPE *temp = (struct NODE_TYPE *)malloc(sizeof(struct NODE_TYPE));
    if(!temp)
        printf("temp malloc error!\n");
    temp->Data = x;			//将要插入元素存入新结点的数据域内
    temp->pNext = NULL;		//队列只能从队尾插入所以下一个结点初始化为NULL
    /*pQHead->rear为队列的最后一个结点，当插入新结点temp时,pQHead->rear->pNext = temp
    使前一个结点的pNext指向新结点，建立队列各结点之间的联系**************************/
    pQHead->rear->pNext = temp;		//将队尾结点的后继指针指向新结点    
    // pQHead->rear总是指向队列的最后一个结点
    pQHead->rear = temp;	//将队尾结点的指针指向新结点temp,temp变为最后一个结点
	pQHead->Length++;
}

int Del(pQHead)
struct LINK_QUEUE *pQHead;
{
	struct NODE_TYPE *temp;
    if(IsEmpty(pQHead))	//如果队列为空,则返回Error
    {
        printf("Error! Queue Empty!\n");
        return 0;
    }
    temp = pQHead->front->pNext;	//初始化temp为要出队的结点的指针
    //如果要出队的结点为最后一个结点,使q->rear指向头结点防止出现悬空的指针
    if(pQHead->front->pNext == pQHead->rear)
        pQHead->rear = pQHead->front;
    pQHead->front->pNext = temp->pNext; //使下一个结点成为队头,如果没有下一个结点则为NULL
    free(temp); //删除要出队的结点
	pQHead->Length--;
    return 1;
}
/*取队首*/
int GetFront(pQHead,y)
struct LINK_QUEUE *pQHead;
int *y;
{
	if(IsEmpty(pQHead))
	{
		printf("\tQueue Empty!");
		return 0;
	}
	*y=pQHead->front->pNext->Data;
	return 1;
}

/*取队尾*/
int GetRear(pQHead,y)
struct LINK_QUEUE *pQHead;
int *y;
{
	if(IsEmpty(pQHead))
	{
		printf("\tQueue Empty!");
		return 0;
	}
	*y=pQHead->rear->Data;
	return 1;
}
//清空队列
void Clear(pQHead)
struct LINK_QUEUE *pQHead;
{
	struct NODE_TYPE *temp=pQHead->front->pNext;
    while(temp)
	{
		pQHead->front->pNext = temp->pNext;
		free(temp);
		temp=pQHead->front->pNext;
	}
	pQHead->rear=pQHead->front;	
	pQHead->Length=0;
}

void PrintNode(pQHead)
struct LINK_QUEUE *pQHead;
{
	struct NODE_TYPE *temp = pQHead->front;
	int i=1;
	/*如果队列为空退出*/
    if(IsEmpty(pQHead)){
        printf("Queue Empty!");
		return;
    }
	printf("\n");
    printf("打印队列中的所有元素:\n");
	/* printf("\nThe node in the QUEUE is:\n");*/
	temp = pQHead->front;
	printf("\n\tNode:");
	printf("\n\t");
	while(temp!= pQHead->rear)
    {
        temp = temp->pNext;
        printf("\t-> %d",i++);
    }
	printf("\n\tData:");
	temp = pQHead->front;
	while(temp!= pQHead->rear)
    {
        temp = temp->pNext;
        printf("\t   %d",temp->Data);
    }
	printf("\n\t\t   Front");
	printf("\n\t");
	temp = pQHead->front;
	while(temp!=pQHead->rear)
	{
		printf("\t");
		temp = temp->pNext;
	}
	printf("   Rear");
    printf("\n");
}