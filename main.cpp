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
		cout<<"�����빦�ܱ��function:";
		cin>>function;
		switch(function)
		{
		case 1:
			singlelist.listStart();break;
		case 2:
			cout<<"������ǰ�巨�������������������num:";
			cin>>num;
			singlelist.listFrontcreate(num);break;
		case 3:
			cout<<"�������巨�������������������num:";
			cin>>num;
			singlelist.listBackcreate(num);break;
		case 4:
			singlelist.disPlay();break;
		case 5:
			cout<<"������ȡֵ��λ��n:";
			cin>>n;
			printf("��%d������:%d\n",n,singlelist.getValue(n));break;
		case 6:
			cout<<"�������ѯ������e:";
			cin>>e;
			printf("��ѯ������%d�ڵ�����ĵ�%d��λ��\n",e,singlelist.seekValue(e));break;
		case 7:
			cout<<"��������������ݵ�λ��n:";
			cin>>n;
			cout<<"��������������ݵ�����ֵe:";
			cin>>e;
			singlelist.insertValue(n,e);break;
		case 8:
			cout<<"������ɾ����λ��n:";
			cin>>n;
			printf("ɾ����λ��%d����:%d\n",n,singlelist.deleteValue(n));
		case 9:
			singlelist.storeDatatofile();break;
		case 10:
			singlelist.importDatafromfile();break;
		case 11:
			singlelist.functionDisplay();break;
		case 12:
			printf("������Ľ����(ͷ������):%d\n",singlelist.getNodenum());break;
		case 13:
			singlelist.bubbleSort();break;
		case 14:
			singlelist.selectionSort();break;
		case 15:
			cout<<"�������ѯ����ֵe:";
			cin>>e;
			printf("��ֵ%d�ڵ�����ĵ�%d��λ��\n",e,singlelist.binarySearch(e));break;
		default:
			cout<<"����Ĺ��ܱ�Ų�����"<<endl;
		}
		cout<<"�Ƿ����ִ����������? 1-����  0-�˳�	:";
		cin>>key;
		system("cls");
	}

		system("pause");
	return 0;
}
	//int num;
	/*
	cout<<"������ǰ�巨�������������������num:";
	cin>>num;
	singlelist.listFrontcreate(num);
	*/
	/*
	cout<<"�������巨�������������������num:";
	cin>>num;
	singlelist.listBackcreate(num);
	singlelist.disPlay();
	*/
	//int n;
	/*
	cout<<"������ȡֵ��λ��n:";
	cin>>n;
	printf("��%d������:%d\n",n,singlelist.getValue(n));
	*/
	//int e;
	/*
	cout<<"�������ѯ������e:";
	cin>>e;
	printf("��ѯ������%d�ڵ�����ĵ�%d��λ��\n",e,singlelist.seekValue(e));
	*/
	/*
	cout<<"��������������ݵ�λ��n:";
	cin>>n;
	cout<<"��������������ݵ�����ֵe:";
	cin>>e;
	singlelist.insertValue(n,e);
	singlelist.disPlay();
	*/
	/*
	cout<<"������ɾ����λ��n:";
	cin>>n;
	printf("ɾ����λ��%d����:%d\n",n,singlelist.deleteValue(n));
	singlelist.disPlay();
	*/
	/*
	singlelist.importDatafromfile();
	singlelist.disPlay();
	*/
