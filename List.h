#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10
#define ElemType int 
typedef struct List{
	ElemType data[SIZE];
	int length;
}List;

void InitList(List **L);
void DestroyList(List **L);
void InsertList(List *L,ElemType e);
void DeleteList(List *L,ElemType e);
int FindList(List *L,ElemType e);
int GetElem(List *L,ElemType e);
int GetLength(List *L);
bool IsEmpty(List *L);
bool IsFull(List *L); 

void InitList(List **L){
	(*L) =(List *)malloc(sizeof(List));
	if((*L)!=NULL){
		(*L)->length=0;	
	}else{
		exit(0);
	}	
}
void DestroyList(List **L){
	printf("%p\n",**L);
	free(L);
}
void InsertList(List *L,ElemType e){
	*(L->data+GetLength(L))=e;
	L->length++; 
}
void DeleteList(List *L,ElemType e){
	int num=FindList(L,e);
	int i;
	if(num!=0){//��num=0���ʾ�����ڲ��������Ա��в����� 
		if(num==L->length){
			L->length--;
		}else{
			int index=num-1;
			for(i=index;i<L->length;i++){
				L->data[i]=L->data[i+1];
			}
			L->length--;
		}
	}
}
/*
	����ֵΪe��λ��
	@Param��L�������ҵ����Ա� ��e������ֵ  �� 
	@return�� e�����Ա�������ƥ���ֵ����ţ���1��ʼ���������ڷ�������ţ����򷵻�0�� 
*/
int FindList(List *L,ElemType e){
	int i;
	for(i=0;i<L->length;i++){
		if(e==L->data[i]){
			break;
		}
	} 
	if(i<L->length){
		return i+1;
	} else{
		return 0;
	}
	
} 
int GetElem(List *L,ElemType e);
int GetLength(List *L){
	return L->length;	
}
bool IsEmpty(List *L){
	if(L->length==0){
		return true;
	} else{
		return false;
	}
} 
bool IsFull(List *L){
	if(L->length >= SIZE){
		return true;
	}else{
		return false;
	}
} 

