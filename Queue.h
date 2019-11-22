#include <stdio.h>
#include <stdbool.h>
#define SIZE 5 //定义队列的大小
#define ElemType int //定义进队、的元素类型
typedef struct Queue{
	ElemType data[SIZE];
	int front,rear;
}Queue;

void InitQueue(Queue *q);
bool EnQueue(Queue *q,ElemType e);
bool DeQueue(Queue *q,ElemType *e);
int GetTop(Queue *q,ElemType *e);
int GetLength(Queue *q);
bool IsEmpty(Queue *q);
bool IsFull(Queue *q); 

void InitQueue(Queue *q){
	q->front=0;
	q->rear=0;
}
bool EnQueue(Queue *q,ElemType e){
	if(!IsFull(q)){
		q->data[q->rear]=e;
		q->rear=(q->rear+1)%SIZE;
		return true; 
	}else{
		printf("队满\n");
		return false;
	}
}
bool DeQueue(Queue *q,ElemType *e){
	if(!IsEmpty(q)){
		*e=q->data[q->front++];
		return true;
	}else{
		printf("队空\n");
		return false;
	}
}
int GetFront(Queue *q,ElemType *e);
int GetLength(Queue *q){
	return (q->rear + SIZE - q->front)%SIZE;
}
bool IsEmpty(Queue *q){
	if(q->front == q->rear){
		return true;
	}else{
		return false;
	}
}
bool IsFull(Queue *q){
	if((q->rear+1)%SIZE==q->front){
		return true;	
	}else{
		return false;
	}
} 
