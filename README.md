# 使用手册
#宏定义 ElemType、SIZE
## 线性结构
### 线性表(include "List.h")
* 初始化顺序表  
> 函数名：InitList() 
> @return：指向线性表的指针(地址) 
* 销毁线性表
> 函数名：DestoryList(List **L)
> @param:指向线性表的指针的地址
* 插入元素   
> 函数名：InsertElem(List *L,ElemType e) 
> @param：L:待插入的线性表；e：需要插入的元素值
* 删除元素
> 函数名：DeleteElme(List *L,ElemType e)
> @param: L:待删除元素的线性表；e:需要删除的元素值
* 求表长
> 函数名：GetLength(List *L)
> @return：线性表长度
* 查找元素
> 函数名：FindElem(List *L,ElemType e)
> @param:L:待查找的线性表；e：待查找的值
> @return：若存在返回其所在线性表的序号(从1开始)，否则返回0
* 判表空
> 函数名:IsEmpty(List *L)
> @param:L:待判断的线性表
* 判表满
> 函数名：IsFull(List *L)
> @param:L:待判断的线性表
### 双向循环链表(inlcude “LinkList.h”)
* 初始化链表
> 函数名：InitLinkList()
> @return :指向链表的头结点的指针
* 销毁链表
> 函数名：DestroyLinkList()
> @param：指向链表的头结点指针的地址
* 插入元素
> 函数名：InsertElem(LinkList **L,ElemType e)
> @param: L:指向头结点指针的地址，e：待插入的元素
* 删除元素
> 函数名：DeleteElem(LinkList **L,ElemType e)
> @param: L:指向头结点指针的地址，e：待删除的元素
* 求表长
> 函数名：GetLength(LinkList *L)
> @param: L:待求的链表
> @return：链表长度
* 查找元素
> 函数名：FindElem(LinkList *L,ElemType e)
> @param: L:待查找的链表；e：带查找的元素
> @return：若待查找元素存在返回其地址，否知返回头结点 
* 判表空
> 函数名；IsEmpty(LinkList *L)
> @param:L：待判定的链表
> return:表空返回true，表不空返回false
* 创建结点
> CreateLinkNode(ElemType e)
> @param:e:待创建结点的值
> @return: 指向新创建的结点的指针(地址)
* 打印链表
> PrintLinkList(LinkList *L)
> @param:待打印的链表

### 顺序栈（通过线性表实现的栈）
### 顺序队（通过线性表实现的队列）
## 树形结构
## 图形结构
