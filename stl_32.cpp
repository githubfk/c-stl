/* stl 算法 - 查找算法
 * search_n(b,e,c,v)
 * search_n(b,e,c,v,p)
 * 注意
 * 该算法的第二种形式应该是
 * search_n_if(b,e,c,p)
 */
#include <iostream>
#include <algorithm>
#include <deque>
#include <functional>

using namespace std;

int main() {
	deque<int> ideq;
	for (int i = 1; i <= 9; ++i)
	{
		if (i == 3)
		{
			ideq.push_back(i);
			ideq.push_back(i);
			ideq.push_back(i);
			ideq.push_back(i);

		}
		else 
			ideq.push_back(i);
	}

	for (deque<int>::iterator iter = ideq.begin(); iter != ideq.end(); ++iter)
		cout << *iter << "  ";

	cout << endl;

	deque<int>::iterator pos;
	pos = search_n(ideq.begin(), ideq.end(), 4, 3);
	if (pos != ideq.end()) {
		cout << "find :" << *pos << endl;
	}
	else
		cout << "no found " << endl;


	cout << "******************" << endl;
	pos = search_n(ideq.begin(), ideq.end(), 3, 6, greater<int>());
	if (pos != ideq.end())
		cout << "find : start at " << distance(ideq.begin(), pos) << endl;
	else
		cout << "no found " << endl;
	return 0;
}
