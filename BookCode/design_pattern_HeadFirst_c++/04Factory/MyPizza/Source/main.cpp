#include "include/stdafx.h"
#include "Store/MyStore.h"

int main(int argc,char* argv[])
{
	MyStore* pStore = new MyStore();
	pStore->OrderPizza("Greek");
	return 0;
}