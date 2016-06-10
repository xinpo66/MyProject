//singleton.h
#pragma once

#include <iostream>
using namespace std;

class MySingleton
{

private:
	static MySingleton* pInstance;

public:

	static MySingleton* GetInstance();

	class SingletonGarbo // ����Ψһ��������������������ɾ��CSingleton��ʵ��  
	{
	public:
		~SingletonGarbo()
		{  
			//������
			cout<<"SingletonGarbo::~SingletonGarbo()"<<endl;
			if (0 != MySingleton::pInstance)
			{
				delete MySingleton::pInstance;
				MySingleton::pInstance = 0;
			}
		}
	};
private:
	MySingleton();

	~MySingleton();//��ֹ�ڲ����ʵĵط��ͷ���

};