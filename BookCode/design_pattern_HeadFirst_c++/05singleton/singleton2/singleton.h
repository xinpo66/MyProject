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

	class SingletonGarbo // 它的唯一工作就是在析构函数中删除CSingleton的实例  
	{
	public:
		~SingletonGarbo()
		{  
			//测试用
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

	~MySingleton();//防止在不合适的地方释放了

};