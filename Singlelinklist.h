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

	linklist S;//头指针S

public:

	void listStart();//单链表初始化函数

	void listFrontcreate(int num);//前插法创建单链表

	void listBackcreate(int num);//后插法创建单链表

	void disPlay()const;//打印输出单链表

	int getValue(int n)const;//单链表的取值函数

	int seekValue(int e)const;//单链表的查找函数

	void insertValue(int n,int e);//单链表的插入函数

	int deleteValue(int n);//单链表的删除函数

	void storeDatatofile()const;//单链表数据存储至文本文件

	void importDatafromfile();//从文本文件导入数据创建单链表

	void functionDisplay();//打印单链表功能菜单
};