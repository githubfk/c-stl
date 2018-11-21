#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main() {
	vector<int> ivec;
	list<int> ilist;

	for (int i = 1; i <= 9; ++i)
		ivec.push_back(i);

	copy(ivec.begin(), ivec.end(), back_inserter(ilist));
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
		cout << *iter << "  " ;
	cout << endl;
	
	return 0;
}
