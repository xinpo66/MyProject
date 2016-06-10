#include "singleton.h"
#include <iostream>
using namespace std;


int main(int argc,char* argv[])
{
	MySingleton* pMySingleton = MySingleton::GetInstance();

	MySingleton* pMySingleton1 = MySingleton::GetInstance();

	delete pMySingleton;

	delete pMySingleton1;
	return 0;
}