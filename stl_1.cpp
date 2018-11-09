#include <iostream>
#include <deque>
#include <algorithm>

int main()
{
	using namespace std;
	deque<int> a;
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);

	a.push_front(6);
	a.push_front(7);
	a.push_front(8);

	for (size_t nCount = 0; nCount < a.size(); ++nCount)
	{
		cout << "a[" << nCount << "] = ";
		cout << a[nCount] << endl; 
	}

	cout << endl;
	
	a.pop_front();
	a.pop_back();

	deque<int>::iterator iElementLocator;
	for (iElementLocator = a.begin(); iElementLocator != a.end(); ++iElementLocator)
	{
		size_t nOffset = distance(a.begin(), iElementLocator);
		cout << "a[" << nOffset << "] = ";
		cout << *iElementLocator << endl;
	}
	cout << endl;
	return 0;
}