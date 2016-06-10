//singleton.cpp
#include "singleton.h"

MySingleton* MySingleton::pInstance = 0;
MySingleton::SingletonGarbo garbo;

MySingleton::~MySingleton()
{
	
}

MySingleton::MySingleton()
{

}

MySingleton* MySingleton::GetInstance()
{
	if ( pInstance == 0)
	{
		pInstance = new MySingleton();
	}

	return pInstance;
}

/*MySingleton* MySingleton::GetInstance()
{
	if ( pInstance == 0)
	{
		//lock();
		if ( pInstance == 0)
		{
			pInstance = new MySingleton();
		}
		//unlock();
	}
	return pInstance;
}*/