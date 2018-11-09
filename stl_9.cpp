#include <iostream>
#include <vector>

using namespace std;

bool findInt(vector<int>::iterator beg, vector<int>::iterator end, int val);

int main()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);

	bool res = findInt(a.begin(), a.end(), 4);
	if (res == true)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}

bool findInt(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
	while (beg != end)
	{
		if (*beg == val)
			break;
		else
			++beg;
	}

	if (beg != end)
		return true;
	else
		return false;
}
