#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 5
#define ElemType int 
typedef struct List{
	ElemType data[SIZE];
	int length;
}List;

List* InitList();
void DestroyList(List **L);
void InsertList(List *L,ElemType e);
void DeleteList(List *L,ElemType e);
int FindElem(List *L,ElemType e);
int GetElem(List *L,ElemType e);
int GetLength(List *L);
bool IsEmpty(List *L);
bool IsFull(List *L); 

List* InitList(){
	List* L =(List *)malloc(sizeof(List));
	if(L!=NULL){
		L->length=0;	
		return L;
	}else{
		exit(0);
	}	
}
void DestroyList(List **L){
	free(L);
}
void InsertList(List *L,ElemType e){
	if(!IsFull(L)){
		*(L->data+GetLength(L))=e;
		L->length++;
	}else{
		printf("表满\n");
	}
	 
}
void DeleteList(List *L,ElemType e){
	if(!IsEmpty(L)){
		int num=FindElem(L,e);
		int i;
		if(num!=0){//若num=0则表示，该在不存在线性表中不存在 
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
	}else{
		printf("表空\n");
	}
	
}
/*
	查找值为e的位置
	@Param：L：待查找的线性表 ；e：查找值  ； 
	@return： e在线性表中最先匹配的值的序号（从1开始），若存在返回其序号，否则返回0； 
*/
int FindElem(List *L,ElemType e){
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
//带以后调用排序算法后完成 
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

