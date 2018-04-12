#include <iostream>
#include "Sqlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	Sqlist L;
	ElemType e;
	L.InitList_Sq(L);
	//前插 
	L.ListInsert_Sq(L,1,1);
	L.ListInsert_Sq(L,1,2);
	L.ListInsert_Sq(L,1,3);
	L.ListInsert_Sq(L,1,4);
//	cout<<L.Getelem(L,2)<<endl;
//	cout<<L.Getlength(L)<<endl;
	L.PrintList(L);
	cout<<L.LocateElem_Sq(L,2)<<endl;
//	cout<<"e="<<e<<endl;
//	L.PrintList(L);
	return 0;
}
Sqlist::InitList_Sq(Sqlist &L){
	L.elem = new ElemType[LIST_INIT_SIZE];
	if(L.elem == NULL)
	{
		exit(OVERFLOW);
	}
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return OK;
}
Sqlist::ExtendList_Sq(Sqlist &L){
	ElemType *newbase;
	ElemType *p,*q;
	newbase = new ElemType[LIST_INIT_SIZE+LISTINCREMENT];
	if(newbase==NULL)
	{
		exit(OVERFLOW);
	}
	p=newbase;
	for(int i = 0;i<LIST_INIT_SIZE;i++){
		*p = *L.elem;
		p++;
		q++;
	}
	L.elem = newbase;
	L.length = LIST_INIT_SIZE;
	L.listsize = LIST_INIT_SIZE + LISTINCREMENT;
	return OK;
}
Sqlist::ListInsert_Sq(Sqlist &L,int i,ElemType e){
	if(i<1||i>L.length+1){
		return ERROR;
	}
	if(L.length+1>L.listsize){
		L.ExtendList_Sq(L);
	}
	//线性表最后一个元素的地址 
	ElemType *p = (L.elem + L.length-1); 
	//第i个元素的地址
	ElemType *q = L.elem + i - 1; 
//	for(p;p>=q;--p){
//		*(p+1)=*p;
//	}
	while(p>=q){
		*(p+1)=*p;
		p--;
	}
	L.length++;
	*q = e;
	return OK;
}
Sqlist::Getelem(Sqlist &L,int i){
	return *(L.elem+i-1);
}
Sqlist::ListDelete_Sq(Sqlist &L,int i,ElemType &e){
	if(i<1||i>L.length){
		return ERROR;
	}
	ElemType *p = L.elem+i-1;
	e = *p;
	while(p!=(L.elem+length)){
		*p = *(p+1);
		p++;
	}
	L.length--;
	return OK;
}
Sqlist::PrintList(Sqlist &L){
	ElemType *q = L.elem;
	for(int i = 0;i<L.length;i++){
		cout<<*q<<endl;
		q++;
	}
	return OK;
}
Sqlist::LocateElem_Sq(Sqlist L,ElemType e){
	ElemType *p = L.elem;
	int i = 1;
	while(i<=L.length&&*p!=e)
	{
		p++;
		i++;
	}
	if(i<=L.length)
		return i;
	else
	return 0;
}


















