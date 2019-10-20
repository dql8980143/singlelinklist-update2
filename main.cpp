#include "Singlelinklist.h"

int main()
{
	List singlelist;
	bool key=true;
	int function;
	int num;
	int n;
	int e;
	while(key)
	{
		singlelist.functionDisplay();
		cout<<"请输入功能编号function:";
		cin>>function;
		switch(function)
		{
		case 1:
			singlelist.listStart();break;
		case 2:
			cout<<"请输入前插法创建单链表的数据总数num:";
			cin>>num;
			singlelist.listFrontcreate(num);break;
		case 3:
			cout<<"请输入后插法创建单链表的数据总数num:";
			cin>>num;
			singlelist.listBackcreate(num);break;
		case 4:
			singlelist.disPlay();break;
		case 5:
			cout<<"请输入取值的位置n:";
			cin>>n;
			printf("第%d个数据:%d\n",n,singlelist.getValue(n));break;
		case 6:
			cout<<"请输入查询的数据e:";
			cin>>e;
			printf("查询的数据%d在单链表的第%d个位置\n",e,singlelist.seekValue(e));break;
		case 7:
			cout<<"请输入插入新数据的位置n:";
			cin>>n;
			cout<<"请输入插入新数据的数据值e:";
			cin>>e;
			singlelist.insertValue(n,e);break;
		case 8:
			cout<<"请输入删除的位置n:";
			cin>>n;
			printf("删除的位置%d数据:%d\n",n,singlelist.deleteValue(n));
		case 9:
			singlelist.storeDatatofile();break;
		case 10:
			singlelist.importDatafromfile();break;
		case 11:
			singlelist.functionDisplay();break;
		default:
			cout<<"输入的功能编号不合理"<<endl;
		}
		cout<<"是否继续执行其他功能? 1-继续  0-退出	:";
		cin>>key;
		system("cls");
	}

		system("pause");
	return 0;
}
	//int num;
	/*
	cout<<"请输入前插法创建单链表的数据总数num:";
	cin>>num;
	singlelist.listFrontcreate(num);
	*/
	/*
	cout<<"请输入后插法创建单链表的数据总数num:";
	cin>>num;
	singlelist.listBackcreate(num);
	singlelist.disPlay();
	*/
	//int n;
	/*
	cout<<"请输入取值的位置n:";
	cin>>n;
	printf("第%d个数据:%d\n",n,singlelist.getValue(n));
	*/
	//int e;
	/*
	cout<<"请输入查询的数据e:";
	cin>>e;
	printf("查询的数据%d在单链表的第%d个位置\n",e,singlelist.seekValue(e));
	*/
	/*
	cout<<"请输入插入新数据的位置n:";
	cin>>n;
	cout<<"请输入插入新数据的数据值e:";
	cin>>e;
	singlelist.insertValue(n,e);
	singlelist.disPlay();
	*/
	/*
	cout<<"请输入删除的位置n:";
	cin>>n;
	printf("删除的位置%d数据:%d\n",n,singlelist.deleteValue(n));
	singlelist.disPlay();
	*/
	/*
	singlelist.importDatafromfile();
	singlelist.disPlay();
	*/
