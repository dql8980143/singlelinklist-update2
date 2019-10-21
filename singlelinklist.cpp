#include "Singlelinklist.h"

//单链表初始化函数
void List::listStart()
{
	//S指向头结点，并将头结点的next指针置空
	cout<<"执行单链表的初始化功能"<<endl;
	S=new list;
	S->next=NULL;
}

//前插法创建单链表函数
void List::listFrontcreate(int num)
{
	cout<<"执行前插法创建单链表功能"<<endl;
	listStart();
	int i;
	list* p;
	for(i=0;i<num;i++)
	{
		p=new list;
		printf("请输入第%d个结点的数据:",i+1);
		scanf("%d",&p->data);
		p->next=S->next;
		S->next=p;
	}
}

//后插法创建单链表函数
void List::listBackcreate(int num)
{
	cout<<"执行后插法创建单链表功能"<<endl;
	listStart();
	list* rear=S;
	int i;
	list* p;
	for(i=0;i<num;i++)
	{
		p=new list;
		printf("请输入第%d个数据:",i+1);
		scanf("%d",&p->data);
		p->next=NULL;
		rear->next=p;
		rear=p;
	}
}

//打印输出单链表
void List::disPlay()const
{
	cout<<"执行打印输出单链表功能"<<endl;
	linklist p=S->next;
	int i=0;
	while(p!=NULL)
	{
		printf("第%d个数据:%d\n",i+1,p->data);
		p=p->next;
		i++;
	}
}

//单链表的取值函数
int List::getValue(int n)const
{
	cout<<"执行单链表的取值功能"<<endl;
	list* p=S->next;
	int i=1;
	while(i!=n && p!=NULL)
	{
		p=p->next;
		i++;
	}
	if(n<1 || !p)
	{
		cout<<"输入的n值不合理"<<endl;
		Sleep(1000);
		exit(1);
	}
	else
		return p->data;
}

//单链表的查找函数
int List::seekValue(int e)const
{
	cout<<"执行单链表查找功能"<<endl;
	list* p=S->next;
	int i=1;
	while(p!=NULL && p->data!=e )
	{
		p=p->next;
		i++;
	}
	if(!p)
	{
		printf("单链表中不存在%d数据\n",e);
		Sleep(1000);
		exit(2);
	}
	else
		return i;
}

//单链表的插入函数
void List::insertValue(int n,int e)
{
	cout<<"执行单链表的插入新数据功能"<<endl;
	list* p=S;
	int i=0;
	while(p!=NULL && i<n-1)
	{
		p=p->next;
		i++;
	}
	if(!p || n<1)
	{
		cout<<"插入的位置n不合理"<<endl;
		Sleep(1000);
		exit(3);
	}
	else
	{
		list* s=new list;
		s->data=e;
		s->next=p->next;
		p->next=s;
	}
}

//单链表的删除函数
int List::deleteValue(int n)
{
	cout<<"执行单链表的删除数据功能"<<endl;
	list* p=S;
	int i=0;
	int tmp;
	while(p!=NULL && i<n-1)
	{
		p=p->next;
		i++;
	}

	if(!p->next || n<1)
	{
		cout<<"删除的位置n不合理"<<endl;
		Sleep(1000);
		exit(4);
	}
	else
	{
		list* s=p->next;
		p->next=s->next;
		tmp=s->data;
		delete s;
	}
	return tmp;
}

//单链表数据存储至文本文件
void List::storeDatatofile()const
{
	cout<<"执行单链表数据存储至文本文件功能"<<endl;
	FILE* fp=fopen("Data.txt","w");
	if(!fp)
	{
		cout<<"文件打开失败"<<endl;
		Sleep(1000);
		exit(5);
	}
	list* p=S->next;
	int i=1;
	while(p!=NULL)
	{
		fprintf(fp,"第%d个数据:%d\n",i,p->data);
		p=p->next;
		i++;
	}
	fclose(fp);
}

//从文本文件导入数据创建单链表
void List::importDatafromfile()
{
	cout<<"执行从文本文件导入数据创建单链表功能"<<endl;
	listStart();
	FILE* fp=fopen("Data.txt","r");
	if(!fp)
	{
		cout<<"文件打开失败"<<endl;
		Sleep(1000);
		exit(6);
	}
	list* rear=S;
	list* s;
	int i;
	do
	{
		s=new list;
		fscanf(fp,"第%d个数据:%d\n",&i,&s->data);
		s->next=NULL;
		rear->next=s;
		rear=s;
	}while(!feof(fp));
	fclose(fp);
}

//打印单链表功能菜单
void List::functionDisplay()
{
	string str(20,'=');
	cout<<str<<endl;
	cout<<"    单链表的功能菜单    "<<endl;
	char* p[]={"1-单链表初始化功能","2-前插法创建单链表功能","3-后插法创建单链表功能",
		"4-打印输出单链表功能","5-单链表的取值功能","6-单链表的查找功能",
		"7-单链表的插入功能","8-单链表的删除功能","9-单链表数据存储至文本文件功能",
		"10-从文本文件导入数据创建单链表功能","11-打印单链表功能菜单功能",
		"12-求单链表结点总数功能","13-单链表冒泡排序功能","14-单链表的选择法排序功能",
	"15-单链表的二分查找功能"};
	int i;
	for(i=0;i<15;i++)
	{
		cout<<p[i]<<endl;
	}
	cout<<str<<endl;
}

//求单链表结点总数(头结点除外)
int List::getNodenum()const
{
	cout<<"执行求单链表结点总数功能"<<endl;
	list* p=S->next;
	int i=0;
	do
	{
		i++;
		p=p->next;
	}while(p);
	return i;
}

//单链表冒泡排序函数
void List::bubbleSort()
{
	cout<<"执行单链表冒泡排序功能"<<endl;
	int num=getNodenum();
	bool select;
	cout<<"输入1-从小到大，0-从大到小:"<<endl;
	cin>>select;
	list* p;
	list* q;
	int tmp;
	int i,j;
	if(select)
	{
		cout<<"从小到大排序"<<endl;
		for(i=0;i<num-1;i++)
		{
			p=S->next;
			q=p->next;
			for(j=0;j<num-1-i;j++)
			{
				if(p->data>q->data)
				{
					tmp=q->data;
					q->data=p->data;
					p->data=tmp;
				}
				p=p->next;
				q=p->next;
			}
		}
	}
	else
	{
		cout<<"从大到小排序"<<endl;
		for(i=0;i<num-1;i++)
		{
			p=S->next;
			q=p->next;
			for(j=0;j<num-1-i;j++)
			{
				if(p->data<q->data)
				{
					tmp=q->data;
					q->data=p->data;
					p->data=tmp;
				}
				p=p->next;
				q=p->next;
			}
		}
	}
}

//单链表选择法排序函数
void List::selectionSort()
{
	cout<<"执行选择法排序功能"<<endl;
	int num=getNodenum();
	bool select;
	cout<<"输入1-从小到大，0-从大到小:"<<endl;
	cin>>select;
	list* p=S;
	list* q;
	int i,j;
	int tmp;
	if(select)
	{
		cout<<"从小到大排序"<<endl;
		for(i=0;i<num-1;i++)
		{
			p=p->next;
			q=p->next;
			for(j=i+1;j<num;j++)
			{
				if(p->data>q->data)
				{
					tmp=q->data;
					q->data=p->data;
					p->data=tmp;
				}
				q=q->next;
			}
		}
	}
	else
	{
		cout<<"从大到小排序"<<endl;
		for(i=0;i<num-1;i++)
		{
			p=p->next;
			q=p->next;
			for(j=i+1;j<num;j++)
			{
				if(p->data<q->data)
				{
					tmp=q->data;
					q->data=p->data;
					p->data=tmp;
				}
				q=q->next;
			}
		}
	}
}

int List::binarySearch(int e)const
{
	cout<<"执行二分查找功能"<<endl;
	int num=getNodenum();
	int right,left,mid;
	left=1;
	right=num;
	list* p;
	int i;
	bool judge=false;
	int locate;
	do
	{
		mid=(left+right)/2;
		i=0;
		p=S;
		do
		{
			i++;
			p=p->next;
		}while(i<mid);
		if(e==p->data)
		{
			locate=mid;
			judge=true;
			break;
		}
		else if(e<p->data)
			right=mid-1;
		else
			left=mid+1;
	}while(left<=right);

	if(judge)
		return locate;
	else
	{
		printf("数值%d不在此单链表中\n",e);
		Sleep(1000);
		exit(7);
	}
}
		
		




	
		









