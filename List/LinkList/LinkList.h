#ifndef _LINKLIST_H_
#define _LINKLIST_H_
#include "Common.h"
typedef struct LNode{
	//������ 
	ElemType data;
	//ָ���� 
	LNode *next;
}LNode,*LinkList;
//��������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L
void CreateList_L(LinkList &L,int n); 
//LΪ��ͷ���ĵ������ͷָ��
//��λ���Ҳ���������i��Ԫ�ش���ʱ����ֵ����e������OK�����򷵻�ERROR 
Status GetElem_L(LinkList L,int i,ElemType &e);
//�ڴ�ͷ���ĵ������Ա�L�е�i��λ��֮ǰ����Ԫ��e
Status ListInsert_L(LinkList &L,int i,ElemType e);
//�ڴ�ͷ���ĵ������Ա�L�У�ɾ����i��Ԫ�أ�����e������ֵ
Status ListDelete_L(LinkList &L,int i,ElemType &e);
//��ͷ��ӡ����
void PrintList_L(LinkList &L); 
//���
int Length_L(LinkList &L);
//��ֵ���Ҳ������ڱ�L�в��Ҿ��и����ؼ���ֵ��Ԫ��
int LocateElem_L(LinkList &L,ElemType e);
//�пղ���������LΪ�ձ��򷵻�OK�����򷵻�ERROR
Status Empty_L(LinkList &L);
//���ٲ������������Ա����ͷ����Ա�L��ռ�õ��ڴ�ռ�
void Destroy_L(LinkList &L); 







#endif
