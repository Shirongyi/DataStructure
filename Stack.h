#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 5 //定义栈的大小
#define ElemType int //定义入栈的元素类型 
typedef struct Stack{
	ElemType data[SIZE];
	int top;
}Stack; 
Stack* InitStack();

void Push(Stack *s,ElemType e);
void Pop(Stack *s,ElemType *e);
int GetTop(Stack *s,ElemType *e);
int GetLength(Stack *s);
bool IsEmpty(Stack *s);
bool IsFull(Stack *s);
void PrintStack(Stack *s);
Stack* InitStack(){
	Stack *s=(Stack *)malloc(sizeof(Stack));
	if(s!=NULL){
		s->top=0;	
		return s;
	}else{
		printf("Stack 申请空间失败\n");
		exit(0);
	}
}

void Push(Stack *s,ElemType e){
	if(!IsFull(s)){
		s->data[s->top++]=e;  
	}else{
		printf("栈满\n");
	}
}
void Pop(Stack *s,ElemType *e){
	if(!IsEmpty(s)){
		//*e=s->data[s->top--];
		*e=*(s->data+(--s->top));
	}else{
		printf("栈空\n");
	}
}
int GetTop(Stack *s,ElemType *e){
	if(!IsEmpty(s)){
		*e=s->data[s->top-1];
	}else{
		printf("栈空\n");
	}
}
int GetLength(Stack *s){
	return s->top;
}
bool IsEmpty(Stack *s){
	if(s->top==0){
		return true;
	}else{
		return false;
	}
}
bool IsFull(Stack *s){
	if(s->top>=SIZE){
		return true;
	}else{
		return false;
	}
}
void PrintStack(Stack *s){
	int i;
	for(i=0;i<GetLength(s);i++){
		printf("%d ",s->data[i]);
	}
	printf("\n");
}
