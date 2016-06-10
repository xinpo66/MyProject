
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/21 20:58 Simple Xu
// 策略模式
// 策略模式：定义算法簇，让他们之间可以相互替换，此模式
// 让算法的变化独立于使用算法的客户。
//////////////////////////////////////////////////////////////////////////

#include "ModelDuck.h"
#include "MallardDuck.h"

int main(int argc,char* argv[])
{
	SP<Duck> D = SP<Duck>(new MallardDuck());
	D->Display();
	D->Swim();
	D->PerformFly();
	D->PerformQuack();

	//动态修改鸭子的行为
	SP<Duck> D2( new ModelDuck());
	D2->Display();
	D2->Swim();
	D2->PerformFly();
	D2->PerformQuack();

	SP<FlyBehavior> F( new FlyRocketPowered());
	D2->SetFly(F);
	D2->PerformFly();

	return 0;
}