#include "singleton.h"


int main(int argc,char* argv[])
{
	MySingleton* pMySingleton = MySingleton::GetInstance();

	MySingleton* pMySingleton1 = MySingleton::GetInstance();

	return 0;
}