//2013-4-10 10：07
//单例设计模式

class MySingleton
{
public:
	~MySingleton();

	static MySingleton* GetInstance();
private:
	MySingleton();

};