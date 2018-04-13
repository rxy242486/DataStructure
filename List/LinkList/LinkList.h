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
//����i��Ԫ�ش���ʱ����ֵ����e������OK�����򷵻�ERROR 
Status GetElem_L(LinkList L,int i,ElemType &e);
//�ڴ�ͷ���ĵ������Ա�L�е�i��λ��֮ǰ����Ԫ��e
Status ListInsert_L(LinkList &L,int i,ElemType e);
//�ڴ�ͷ���ĵ������Ա�L�У�ɾ����i��Ԫ�أ�����e������ֵ
Status ListDelete_L(LinkList &L,int i,ElemType &e);
//��֪�������Ա�La��Lb��Ԫ�ذ�ֵ�ǵݼ����С�
//�鲢La��Lb�õ��µĵ������Ա�Lc��Lc��Ԫ��Ҳ��ֵ�ǵݼ����С�
void MergeList_L(LinkList &La,LinkList &Lb,LinkList &Lc); 
//��ͷ��ӡ����
void PrintList_L(LinkList &L); 







#endif
