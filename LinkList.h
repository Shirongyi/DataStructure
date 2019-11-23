#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define ElemType int
typedef struct LinkNode{
	ElemType data;
	struct LinkNode *next;
	struct LinkNode *prior; 
}LinkList;

LinkList* CreateLinkNode(ElemType e);
LinkList* InitLinkList();
void DestroyLinkList(LinkList **L);
void InsertElem(LinkList **L,ElemType e);
void DeleteElem(LinkList **L,ElemType e);
LinkList* FindElem(LinkList *L,ElemType e);
LinkList* GetElem(LinkList *L,ElemType e);
int GetLength(LinkList *L);
bool IsEmpty(LinkList *L);
void PrintLinkList(LinkList *L);

LinkList* InitLinkList(){
	LinkList* L=(LinkList *)malloc(sizeof(LinkList));
	if(L!=NULL){
		L->next=L;
		L->prior=L;
		return L; 
	}else{
		exit(0); 
	}
}
void DestroyLinkList(LinkList **L){
	if(*L!=NULL){
		LinkList *pre=*L;
		LinkList *p=(*L)->next;
		int count =GetLength(*L);
		while(count--){
			free(pre);
			pre=p;
			p=p->next;
		}
	}
	//貌似无法free头结点，暂时先置为空
	*L=NULL;
	 
}
LinkList* CreateLinkNode(ElemType e){
	LinkList* newNode=(LinkList *)malloc(sizeof(LinkList));
	newNode->data=e;
	newNode->next=newNode;
	newNode->prior=newNode;
	return newNode;
}
/*
	尾插法 
*/
void InsertElem(LinkList **L,ElemType e){
	LinkList* rear=(*L);
	while(rear->next!=*L){
		rear=rear->next;
	}
	LinkList* s=CreateLinkNode(e);	
	s->next=(*L);
	s->prior=rear; 
	rear->next=s;
	(*L)->prior=s;
	rear=s;	
}
void DeleteElem(LinkList **L,ElemType e){ 
	if(!IsEmpty(*L)){
		LinkList *p=FindElem(*L,e);//查找元素e的地址 
		if(p!=*L){
			p->prior->next = p->next; 
			p->next->prior = p->prior;
			free(p);
		}	
	}else{
		printf("表空\n");
	}
}
/*
	查找元素e的地址
	@return 指向e元素所在结点的地址（指针）,
			若存在返回其所处地址，否则返回头结点的地址	
*/
LinkList* FindElem(LinkList *L,ElemType e){
	LinkList *p=L->next;
	while(p!=L){
		if(p->data==e)break;
		p=p->next;
	} 
	return p;
} 

LinkList* GetElem(LinkList *L,ElemType e){
	
}
int GetLength(LinkList *L){
	LinkList* p=L;
	int count=0;
	while(p->next!=L){
		p=p->next;
		count++;
	}
	return count;
}
bool IsEmpty(LinkList *L){
	if(L->next==L){
		return true;
	}else{
		return false; 
	} 
}
void PrintLinkList(LinkList *L){
	LinkList *p=L;
	while(p->next!=L){
		p=p->next;
		printf("%d ",p->data);
	}
	printf("\n");
}
