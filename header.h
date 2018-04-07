#include <iostream>
using namespace std;
#include<string>

#include "dvd.h"
class dvdcollection{
public:
	dvdcollection()
	{
		totalcost = 0;
		count = 0;
		size = 5;
		dvdlist = new dvd[5];
}
	dvdcollection(dvd *dvdlist)
	{
		this->dvdlist = dvdlist;
	}
	dvdcollection(dvdcollection & clone)
	{
		this->totalcost = clone.totalcost;
		this->count = clone.count;
		this->size = clone.size;
		this->dvdlist = clone.dvdlist;
	}
	void settotalcost(int totalcost)
	{
		this->totalcost = totalcost;
	}
	void setsize(int size)
	{
		this->size = size;
	}
	void setcount(int count)
	{
		this->count = count;
	}
	void setdvdlist(dvd *dvdlist)
	{
		this->dvdlist = dvdlist;
	}
	int gettotalcost(void)
	{
		return this->totalcost;
	}
	int getsize(void)
	{
		return this->size;
	}
	dvd* getdvd(void)
	{
		return this->dvdlist;
	}
	int getcount(void)
	{
		return this->count;
	}
	void add(dvd &d)
	{
		if (count < 5)
		{
			dvdlist[count] = d;
			count++;
			

		}
		else{
			incsize(d);
		}
		this->totalcost += d.getcost();
	}
	void display()
	{
		cout << "MY COLLECTION" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << this->dvdlist[i] << endl;
		}
		cout << "total cost:" << this->totalcost<<endl;
	}
	int  search(string name)
	{
		dvd dd;
		int temp;
		
		for (i = 0; i < count; i++)
		{
			dd =this-> dvdlist[i];
			if (name == dd.getname())

			{
				temp =i ;
				break;
			}
		}
		return temp;
	}
	void Delete(string name)  
	 {
		   int temp = search(name);
		   if (temp >= 0)
		   {
			    for (i = temp ; i < count - 1; i++)
				    {
				       this->dvdlist[i] = this->dvdlist[i + 1];
				    }
			     count--;
			  }
		  else
			  {
			    cout << "Not found!!" << endl;
			  }
		 }
	void incsize(dvd &d) 
		   {
		    size = size * 2;
		     dvd *newlist = new dvd[size];
		    for (i = 0; i < (size / 2); i++)
			    {
			      newlist[i] = dvdlist[i];
			     }
	     delete[] dvdlist;
		    dvdlist = newlist;
		     dvdlist[count] = d;
	    count++;
		  }




private:
	int totalcost;
	int count = 0;
	dvd *dvdlist;
	int size;
		int i;
};