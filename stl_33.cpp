#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

bool checkEven(int elem, bool even) {
	if(even)
		return elem % 2 == 0;
	else
		return elem % 2 == 1;	
}

int main() {
	vector<int> ivec;
	for (int i = 1; i <= 9; ++i)
		ivec.push_back(i);
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "  ";
	cout << endl;

	bool checkEvenArgs[3] = {true, false, true};
	vector<int>::iterator pos;
	pos = search(ivec.begin(), ivec.end(), checkEvenArgs, checkEvenArgs+3, checkEven);

	if (pos != ivec.end())
		cout << "find :" << distance(ivec.begin(), pos) + 1 << endl;
	else 
		cout << "no found" << endl;
	return 0;
}