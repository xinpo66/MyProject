#include "singleton.h"

MySingleton::~MySingleton()
{

}

MySingleton::MySingleton()
{

}

MySingleton* MySingleton::GetInstance()
{
	static MySingleton* pInstance = new MySingleton();

	return pInstance;
}