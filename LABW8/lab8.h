// ��ʽ���н��ṹ
struct NODE_TYPE
{
    int Data;    //�������
	//��̽��,���������и����֮�����ϵ��ǰһ������pNextָ���һ����㣬�γ���ʽ����
    struct NODE_TYPE *pNext;  
};
// ��ʽ���нṹ
struct LINK_QUEUE
{
    struct NODE_TYPE *front;      //��ʽ���еĶ�ͷָ�룬����ָ����е�ͷ���(����һ�Σ��ڶ�������Ϊͷ���)
    struct NODE_TYPE *rear;       //��ʽ���еĶ�βָ�룬���ʱָ���²�����(����ָ����е����һ�����)
	int Length;
};
//�����ն��У� pQHeadΪ����ͷ���
void InitQueue(pQHead)
struct LINK_QUEUE *pQHead;
{
    //����ͷ���Ķ�ͷ�Ͷ�βָ�������ڴ�
    pQHead->front=pQHead->rear = (struct NODE_TYPE *)malloc(sizeof(struct NODE_TYPE));
    if(!pQHead->front)	//����Ƿ�����ʧ��
        printf("pQHead->front malloc error!\n");
    //����ͷ���ָ����Ϊ��
    pQHead->front->pNext = NULL;
	pQHead->Length=0;
}
//�ж϶����Ƿ�Ϊ��
int IsEmpty(pQHead)
struct LINK_QUEUE *pQHead;
{
    //��ͷָ�����βָ����ȣ�˵������Ϊ��
    return(pQHead->front == pQHead->rear);
}
//��Ԫ�����:����ʽ���е�β���ָ�룬ָ������Ԫ�ص��½��
void Add(pQHead,x)
struct LINK_QUEUE *pQHead;
int x;
{
    //�����½��,�������ڴ�
    struct NODE_TYPE *temp = (struct NODE_TYPE *)malloc(sizeof(struct NODE_TYPE));
    if(!temp)
        printf("temp malloc error!\n");
    temp->Data = x;			//��Ҫ����Ԫ�ش����½�����������
    temp->pNext = NULL;		//����ֻ�ܴӶ�β����������һ������ʼ��ΪNULL
    /*pQHead->rearΪ���е����һ����㣬�������½��tempʱ,pQHead->rear->pNext = temp
    ʹǰһ������pNextָ���½�㣬�������и����֮�����ϵ**************************/
    pQHead->rear->pNext = temp;		//����β���ĺ��ָ��ָ���½��    
    // pQHead->rear����ָ����е����һ�����
    pQHead->rear = temp;	//����β����ָ��ָ���½��temp,temp��Ϊ���һ�����
	pQHead->Length++;
}

int Del(pQHead)
struct LINK_QUEUE *pQHead;
{
	struct NODE_TYPE *temp;
    if(IsEmpty(pQHead))	//�������Ϊ��,�򷵻�Error
    {
        printf("Error! Queue Empty!\n");
        return 0;
    }
    temp = pQHead->front->pNext;	//��ʼ��tempΪҪ���ӵĽ���ָ��
    //���Ҫ���ӵĽ��Ϊ���һ�����,ʹq->rearָ��ͷ����ֹ�������յ�ָ��
    if(pQHead->front->pNext == pQHead->rear)
        pQHead->rear = pQHead->front;
    pQHead->front->pNext = temp->pNext; //ʹ��һ������Ϊ��ͷ,���û����һ�������ΪNULL
    free(temp); //ɾ��Ҫ���ӵĽ��
	pQHead->Length--;
    return 1;
}
/*ȡ����*/
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

/*ȡ��β*/
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
//��ն���
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
	/*�������Ϊ���˳�*/
    if(IsEmpty(pQHead)){
        printf("Queue Empty!");
		return;
    }
	printf("\n");
    printf("��ӡ�����е�����Ԫ��:\n");
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