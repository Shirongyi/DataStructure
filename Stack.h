#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10 //����ջ�Ĵ�С
#define ElemType int //������ջ��Ԫ������ 
typedef struct Stack{
	ElemType data[SIZE];
	int top;
}Stack; 
void InitStack(Stack *s);

void Push(Stack *s,ElemType e);
void Pop(Stack *s,ElemType *e);
int GetTop(Stack *s,ElemType *e);
int GetLength(Stack *s);
bool IsEmpty(Stack *s);
bool IsFull(Stack *s);

void InitStack(Stack *s){
	s->top=-1;
}

void Push(Stack *s,ElemType e){
	if(!IsFull(s)){
		s->data[++s->top]=e;  
	}else{
		printf("ջ��\n");
	}
}
void Pop(Stack *s,ElemType *e){
	if(!IsEmpty(s)){
		//*e=s->data[s->top--];
		*e=*(s->data+(s->top--));
	}else{
		printf("ջ��\n");
	}
}
int GetTop(Stack *s,ElemType *e){
	if(!IsEmpty(s)){
		*e=s->data[s->top];
	}else{
		printf("ջ��\n");
	}
}
int GetLength(Stack *s){
	return s->top+1;
}
bool IsEmpty(Stack *s){
	if(s->top==-1){
		return true;
	}else{
		return false;
	}
}
bool IsFull(Stack *s){
	if(s->top+1>=SIZE){
		return true;
	}else{
		return false;
	}
}
