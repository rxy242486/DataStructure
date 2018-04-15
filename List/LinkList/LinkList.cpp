#include "LinkList.h"
#include "iostream"
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	LinkList L;
	ElemType e;
	CreateList_L(L,5);
	PrintList_L(L);
	cout<<"���Ա��ȣ�"<<Length_L(L)<<endl;
	GetElem_L(L,2,e);
	cout<<"�ڶ���Ԫ��Ϊ:"<<e<<endl;
	cout<<LocateElem_L(L,4)<<endl;
	cout<<"==============�������==============="<<endl;
	ListInsert_L(L,3,9);
	PrintList_L(L);
	cout<<"==============ɾ������==============="<<endl;
	ListDelete_L(L,3,e);
	cout<<"ɾ����Ԫ��Ϊ��"<<e<<endl;
	PrintList_L(L); 
	return 0;
}
void CreateList_L(LinkList &L,int n){
	//ͷ����д��������Ԫ�صĸ��� 
	L = new LNode;
	LinkList p; 
	L->data = 0;
	L->next = NULL;
	ElemType e;
	int i = 1;
	while(i<=n){
		if(p = new LNode){
			cin>>p->data;
			p->next = L->next;
			L->next = p;
			L->data ++;
			i++;
		}
		else{
			cout<<"error"<<endl;
			break; 
		}
	}
	cout<<"OK"<<endl;
}
void PrintList_L(LinkList &L){
	LinkList p = L->next;
	for(int i = 0;i < L->data;i++){
		cout<<p->data<<endl;
		p = p->next;
	}
}
Status GetElem_L(LinkList L,int i,ElemType &e){
	if(i<1||i>L->data)//�ж�i�ĺϷ��� 
		return ERROR;
	else{
		LinkList p = L->next;
		for(int j = 1;j<i;j++)
		{
			if(p){
				p = p->next;
			}
			else
				break;
		}
		e = p->data;
		return OK;
	}		
}
int Length_L(LinkList &L)
{
	return L->data;
}
int LocateElem_L(LinkList &L,ElemType e)
{
	LinkList p = L->next;
	int i = 1;
	while(p&&p->data!=e&&(i+1)<=L->data)
	{
		i++;
		p = p->next;
	}
	if(i+1>L->data)
	{
		return 0;//û�ҵ� 
	}
	else
		return i;//�ҵ��ˣ�������λ�� 
}
Status ListInsert_L(LinkList &L,int i,ElemType e){
	if(i<1||i>L->data)//�ж�i�ĺϷ��� 
		return ERROR;
	else{
		LinkList p = L->next;
		for(int j = 1;j<i-1;j++)
		{
			if(p){
				p = p->next;
			}
			else
				break;
		}
		LinkList q = new LNode;
		q->next = p->next;
		p->next = q;
		q->data = e;
		return OK;
		
	} 
}
Status ListDelete_L(LinkList &L,int i,ElemType &e){
	if(i<1||i>L->data)//�ж�i�ĺϷ��� 
		return ERROR;
	else{
		LinkList p = L->next;
		for(int j = 1;j<i-1;j++)
		{
			if(p){
				p = p->next;
			}
			else
				break;
		}
		e = p->next->data;
		p->next = p->next->next;
		return OK;
		
	} 
}












