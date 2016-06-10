//2014-4-9 11:09
//�������ӿ�
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


//�۲��߽ӿ�

class Observer
{
public:
	Observer(){ }
	virtual ~Observer() { }

	virtual void update(int temperature,int humidity, int pressure) = 0;
};

//����彨��һ����ͬ�ӿ�

class DisplayElement
{
public:
	DisplayElement() { }
	virtual ~DisplayElement() { }

	virtual void display() = 0;
};