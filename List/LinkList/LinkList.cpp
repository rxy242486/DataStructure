#include "LinkList.h"
#include "iostream"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	LinkList L;
	CreateList_L(L,5);
	PrintList_L(L);
	return 0;
}
void CreateList_L(LinkList &L,int n){
	//头结点中存放链表中元素的个数 
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
