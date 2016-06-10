#ifndef INGREDIENT_H_
#define INGREDIENT_H_
//////////////////////////////////////////////////////////////////////////
//
// 2016/3/10 21:09
// Simple Xu
// 各种原料类
// 
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
class Dough
{
public:
	Dough(){
	}
protected:
private:
};

class ThinCrustDough : public Dough
{
public:
	ThinCrustDough()
	{
		printf("ThinCrustDough\n");
	}
protected:
private:
};

class ThickCrustDough : public Dough
{
public:
	ThickCrustDough()
	{
		printf("ThickCrustDough\n");
	}
protected:
private:
};


//////////////////////////////////////////////////////////////////////////

class Sauce
{
public:
	Sauce(){}
protected:
private:
};

class MarinaraSauce : public Sauce
{
public:
	MarinaraSauce()
	{
		printf("MarinaraSauce\n");
	}
protected:
private:
};

//芝加哥风味

class PlumTomatoSauce : public Sauce
{
public:
	PlumTomatoSauce()
	{
		printf("PlumTomatoSauce\n");
	}
protected:
private:
};

//////////////////////////////////////////////////////////////////////////
class Cheese
{
public:
	Cheese(){}
protected:
private:
};

class ReggianoCheese : public Cheese
{
public:
	ReggianoCheese()
	{
		printf("ReggianoCheese\n");
	}
protected:
private:
};

//////////////////////////////////////////////////////////////////////////

class Veggies
{
public:
	Veggies(){}
protected:
private:
};

class Pepperoni
{
public:
	Pepperoni(){}
protected:
private:
};

class Clams
{
public:
	Clams(){}
};
#endif //INGREDIENT_H_