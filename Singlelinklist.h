#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

typedef	struct	singlelinklist
{
	int data;
	singlelinklist* next;
}*linklist,list;

class List
{
private:

	linklist S;//ͷָ��S

public:

	void listStart();//�������ʼ������

	void listFrontcreate(int num);//ǰ�巨����������

	void listBackcreate(int num);//��巨����������

	void disPlay()const;//��ӡ���������

	int getValue(int n)const;//�������ȡֵ����

	int seekValue(int e)const;//������Ĳ��Һ���

	void insertValue(int n,int e);//������Ĳ��뺯��

	int deleteValue(int n);//�������ɾ������

	void storeDatatofile()const;//���������ݴ洢���ı��ļ�

	void importDatafromfile();//���ı��ļ��������ݴ���������

	void functionDisplay();//��ӡ�������ܲ˵�

	int getNodenum()const;//������������(ͷ������)

	void bubbleSort();//������ð��������

	void selectionSort();//������ѡ��������

	int binarySearch(int e)const;//���ֲ��Һ���
};