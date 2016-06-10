
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/21 20:58 Simple Xu
// ����ģʽ
// ����ģʽ�������㷨�أ�������֮������໥�滻����ģʽ
// ���㷨�ı仯������ʹ���㷨�Ŀͻ���
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

	//��̬�޸�Ѽ�ӵ���Ϊ
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