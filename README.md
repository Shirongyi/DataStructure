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
>函数名：DeleteElme(List *L,ElemType e)
>@param: L:待删除元素的线性表；e:需要删除的元素值
* 求表长
>函数名：GetLength(List *L)
>@return：线性表长度
* 查找元素
>函数名：FindElem(List *L,ElemType e)
>@param:L:待查找的线性表；e：待查找的值
>@return：若存在返回其所在线性表的序号(从1开始)，否则返回0
### 链表
### 顺序栈（通过线性表实现的栈）
### 顺序队（通过线性表实现的队列）
## 树形结构
## 图形结构
