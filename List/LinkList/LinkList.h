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
//当第i个元素存在时，其值赋给e并返回OK，否则返回ERROR 
Status GetElem_L(LinkList L,int i,ElemType &e);
//在带头结点的单链线性表L中第i个位置之前插入元素e
Status ListInsert_L(LinkList &L,int i,ElemType e);
//在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
Status ListDelete_L(LinkList &L,int i,ElemType &e);
//已知单链线性表La和Lb的元素按值非递减排列。
//归并La和Lb得到新的单链线性表Lc，Lc的元素也按值非递减排列。
void MergeList_L(LinkList &La,LinkList &Lb,LinkList &Lc); 
//从头打印链表
void PrintList_L(LinkList &L); 







#endif
