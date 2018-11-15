#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main() {
	vector<int> ivec;
	vector<int>::iterator pos;

	for (int i =1; i <= 9; ++i)
		ivec.push_back(i);

	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << endl;
	cout << endl;

	pos = find_if(ivec.begin(), ivec.end(), bind2nd(greater<int>(), 3)); // 大于等于3
	cout << *pos << endl;

	pos = find_if(ivec.begin(), ivec.end(), not1(bind2nd(modulus<int>(), 3))); // 能被3整除
	cout << *pos << endl;
	return 0;
}