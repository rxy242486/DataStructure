#ifndef _SQLIST_H_
#define _SQLIST_H_
#define LIST_INIT_SIZE 100//线性表存储空间的初始分配量
#define LISTINCREMENT 10//线性表存储空间的分配增量
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
using namespace std; 
typedef int Status;
typedef int ElemType;
class Sqlist{
private:
	//存储空间基址
	ElemType *elem;
	//当前长度
	int length;
	//当前分配的存储容量(以sizeof(ElemType)为单位)
	int listsize; 
public:
	//构造函数 
	Sqlist(){
		elem = NULL;
		cout<<"调用构造函数"<<endl;
	}
	//构造一个空的线性表
	Status InitList_Sq(Sqlist &L);
	//扩展线性表的容量
	Status ExtendList_Sq(Sqlist &L); 
	//在顺序线性表L中第i个位置之前插入新的元素e
	Status ListInsert_Sq(Sqlist &L,int i,ElemType e);
	//在顺序表L中删除第i个元素，并用e返回其值
	Status ListDelete_Sq(Sqlist &L,int i,ElemType &e);
	//在顺序表L中查找第1个值与e相等的位序 
	int LocateElem_Sq(Sqlist L,ElemType e);
	//已知顺序线性表La和Lb的元素按值非递减排列
	//归并La和Lb得到新的顺序线性表Lc，Lc的元素也按值非递减排列
	void MergeList_Sq(Sqlist La,Sqlist Lb,Sqlist &Lc);
	//获取指定位置元素
	ElemType Getelem(Sqlist &L,int i);
	//获取线性表长度
	int Getlength(Sqlist &L){
		return L.length;
	} 
	//打印线性表
	Status PrintList(Sqlist &L); 
	 
	
};
#endif
