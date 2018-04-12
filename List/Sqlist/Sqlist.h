#ifndef _SQLIST_H_
#define _SQLIST_H_
#define LIST_INIT_SIZE 100//���Ա�洢�ռ�ĳ�ʼ������
#define LISTINCREMENT 10//���Ա�洢�ռ�ķ�������
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
	//�洢�ռ��ַ
	ElemType *elem;
	//��ǰ����
	int length;
	//��ǰ����Ĵ洢����(��sizeof(ElemType)Ϊ��λ)
	int listsize; 
public:
	//���캯�� 
	Sqlist(){
		elem = NULL;
		cout<<"���ù��캯��"<<endl;
	}
	//����һ���յ����Ա�
	Status InitList_Sq(Sqlist &L);
	//��չ���Ա������
	Status ExtendList_Sq(Sqlist &L); 
	//��˳�����Ա�L�е�i��λ��֮ǰ�����µ�Ԫ��e
	Status ListInsert_Sq(Sqlist &L,int i,ElemType e);
	//��˳���L��ɾ����i��Ԫ�أ�����e������ֵ
	Status ListDelete_Sq(Sqlist &L,int i,ElemType &e);
	//��˳���L�в��ҵ�1��ֵ��e��ȵ�λ�� 
	int LocateElem_Sq(Sqlist L,ElemType e);
	//��֪˳�����Ա�La��Lb��Ԫ�ذ�ֵ�ǵݼ�����
	//�鲢La��Lb�õ��µ�˳�����Ա�Lc��Lc��Ԫ��Ҳ��ֵ�ǵݼ�����
	void MergeList_Sq(Sqlist La,Sqlist Lb,Sqlist &Lc);
	//��ȡָ��λ��Ԫ��
	ElemType Getelem(Sqlist &L,int i);
	//��ȡ���Ա���
	int Getlength(Sqlist &L){
		return L.length;
	} 
	//��ӡ���Ա�
	Status PrintList(Sqlist &L); 
	 
	
};
#endif
