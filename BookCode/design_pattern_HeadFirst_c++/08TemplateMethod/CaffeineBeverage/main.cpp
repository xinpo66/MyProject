
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/23 21:29 Simple Xu
// ģ�巽��ģʽ��
// ���壺��һ�������ж���һ���㷨�ĹǼܣ�����һЩ�����ӳٵ������С�
// ģ�巽��ʹ����������ڲ��ı��㷨�ṹ������£����¶����㷨�е�ĳЩ���衣
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