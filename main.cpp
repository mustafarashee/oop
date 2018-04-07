#include <iostream>
using namespace std;
#include "header.h"

int main()
{
	int index;
	dvdcollection dl;
	dl.add(*(new dvd("windows xp", 200)));
	dl.add(*(new dvd("neogeo", 100)));
	dl.add(*(new dvd("fifa", 500)));
	dl.add(*(new dvd("igi", 200)));
	dl.add(*(new dvd("ms office", 100)));
	dl.add(*(new dvd("fifa18", 500)));
	dl.add(*(new dvd("windows 8", 200)));
	dl.add(*(new dvd("harry potter", 100)));
	dl.add(*(new dvd("drivers", 500)));
	dl.display();

	/*dl.Delete("neogeo");
	dl.Delete("fifa18");
	dl.display();*/
	//cout << "name:" << dl.search("igi");

	
	system("pause");
}