#ifndef _LINKLIST_H_
#define _LINKLIST_H_
#include "Common.h"
typedef struct LNode{
	//数据域 
	ElemType data;
	//指针域 
	LNode *next;
}LNode,*LinkList;
//逆序输入n个元素的值，建立带表头结点的单链线性表L
void CreateList_L(LinkList &L,int n); 
//L为带头结点的单链表的头指针
//按位查找操作，当第i个元素存在时，其值赋给e并返回OK，否则返回ERROR 
Status GetElem_L(LinkList L,int i,ElemType &e);
//在带头结点的单链线性表L中第i个位置之前插入元素e
Status ListInsert_L(LinkList &L,int i,ElemType e);
//在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
Status ListDelete_L(LinkList &L,int i,ElemType &e);
//从头打印链表
void PrintList_L(LinkList &L); 
//求表长
int Length_L(LinkList &L);
//按值查找操作。在表L中查找具有给定关键字值的元素
int LocateElem_L(LinkList &L,ElemType e);
//判空操作。若表L为空表，则返回OK，否则返回ERROR
Status Empty_L(LinkList &L);
//销毁操作。销毁线性表，并释放线性表L所占用的内存空间
void Destroy_L(LinkList &L); 







#endif
