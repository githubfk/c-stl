#include <iostream>
#include <list>
using namespace std;

void PrintlistContents(const list<int>& listInput);
int main()
{

	list<int> a;
	a.push_front(10);
	a.push_front(100);
	a.push_front(20);
	a.push_back(1919);


	a.insert(a.begin(), 777);
	a.insert(a.end(), 4, 999);




	list<int> b;
	b.push_front(666);
	b.push_front(666);
	b.push_front(666);
	b.push_back(666);



    a.insert(a.begin(), b.begin(), b.end());
    PrintlistContents(a);
    cout << endl;
	PrintlistContents(b);
	cout << endl;



}

void PrintlistContents(const list<int>& listInput)
{
	std::list<int>::const_iterator iter;
	for (iter = listInput.begin(); iter != listInput.end(); ++iter)
		cout << *iter << endl;
}
