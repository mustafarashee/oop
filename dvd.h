#include <iostream>


using namespace std;


 class dvd{

public:
	dvd()
	{
		name = "";
		cost = 0;
	}
	dvd(string name, float cost)
	{
		this->cost = cost;
		this->name = name;
	}
	dvd(dvd& clone)
	{
		this->cost = clone.cost;
		this->name = clone.cost;
	}
	void setcost(int cost)
	{
		this->cost = cost;

	}
	void setname(string name)
	{
		this->name = name;
	}
	int getcost(void)
	{
		return this->cost;
	}
	string getname(void)
	{
		return this->name;
	}
	void display(void)
	{
		cout << "dvd name" << name <<endl<< "dvd cost:" << cost << endl;
	}

private:
	string name;
	float cost;
};
ostream& operator <<(ostream& o, dvd& s)
{
	return o << "name:" << s.getname()<<endl << "cost:" << s.getcost() << endl;
}