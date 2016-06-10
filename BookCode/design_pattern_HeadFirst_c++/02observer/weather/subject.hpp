//2014-4-9 11:09
//主题对象接口
#pragma once

class Observer;

class Subject
{
public:
	Subject(){ }

	virtual ~Subject(){ }
	
	virtual void registerObserver( Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
	virtual void notifyObservers() = 0;
};


//观察者接口

class Observer
{
public:
	Observer(){ }
	virtual ~Observer() { }

	virtual void update(int temperature,int humidity, int pressure) = 0;
};

//布告板建立一个共同接口

class DisplayElement
{
public:
	DisplayElement() { }
	virtual ~DisplayElement() { }

	virtual void display() = 0;
};