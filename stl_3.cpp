#include <iostream>
#include <list>
//#include <algorithm>

using namespace std;
void Printinfo(const list<int>& listInput);

int main()
{

	list<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	list<int>::iterator aiter;
	aiter = a.insert(a.end(), 999);

	a.push_back(5);
	a.push_back(6);


	a.erase(a.begin(),aiter);
	Printinfo(a);

	a.sort();

	a.reverse();
	Printinfo(a);
	return 0;

}

void Printinfo(const list<int>& listInput)
{
	std::list<int>::const_iterator iter;
	for (iter = listInput.begin(); iter != listInput.end(); ++iter)
		cout << *iter << endl;
}