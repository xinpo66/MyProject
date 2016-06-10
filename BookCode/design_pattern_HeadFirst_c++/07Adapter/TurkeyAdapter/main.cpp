
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 9:25 Simple Xu
// 对象适配器的一个简单测试例子
//////////////////////////////////////////////////////////////////////////

#include <sp.hpp>

#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

int main(int argc,char* argv[])
{
	//SP<Turkey> pWildTurkey( new WildTurkey());
	SP<Turkey> pWildTurkey;
	pWildTurkey = SP<Turkey>(new WildTurkey());
	pWildTurkey->gobble();
	pWildTurkey->fly();

	SP<Duck> pTurkeyAdapter( new TurkeyAdapter(pWildTurkey));
	pTurkeyAdapter->quack();
	pTurkeyAdapter->fly();

	return 0;
}