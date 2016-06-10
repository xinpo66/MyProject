
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/23 21:29 Simple Xu
// 模板方法模式。
// 定义：在一个方法中定义一个算法的骨架，而将一些步骤延迟到子类中。
// 模板方法使得子类可以在不改变算法结构的情况下，重新定义算法中的某些步骤。
//////////////////////////////////////////////////////////////////////////

#include <sp.hpp>

#include "Tea.h"

#include "TeaWithHook.h"
#include "CoffeWithHook.h"

int main(int argc,char* argv[])
{
	SP<CaffeineBeverage> pTea(new Tea());
	pTea->PrepareRecipe();

	SP<CaffeineBeverageWithHook> Caff(new CoffeWithHook());
	Caff->PrepareRecipe();

	SP<CaffeineBeverageWithHook> TeaHook(new TeaWithHook());
	TeaHook->PrepareRecipe();

	return 0;
}