//2013-4-10 10��07
//�������ģʽ

class MySingleton
{
public:
	~MySingleton();

	static MySingleton* GetInstance();
private:
	MySingleton();

};