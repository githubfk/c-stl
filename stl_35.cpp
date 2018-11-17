/* stl算法 - 查找算法
 * adjacent_find(b,e)
 * adjacent_find(b,e,p)
 */

/* 已序区间查找算法
 * binary_search(b,e,v)
 * binary_search(b,e,v,p)
 * includes(b,e,sb,se)
 * includes(b,e,sb,se,p)
 */

/* stl算法 - 查找算法
 * lower_bound()
 * upper_bound()
 * equal_range()
 * 关联式容器有等效的成员函数，性能更佳
 */

#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
	list<int> ilist;
	for (int i = 1; i < 9; ++i)
		ilist.insert(ilist.end(), i);
	for (int i = 1; i < 9; ++i)
		ilist.insert(ilist.end(), i);

	ilist.push_back(5);
	ilist.push_back(5);
	ilist.push_back(5);
	ilist.sort();

	for(list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	list<int>::iterator pos1;
	pos1 = lower_bound(ilist.begin(), ilist.end(), 5);
	cout << "the first of 5: " << distance(ilist.begin(), pos1) + 1 << endl;

	list<int>::iterator pos2;
	pos2 = upper_bound(ilist.begin(), ilist.end(), 5);
	cout << "the last of 5: " << distance(ilist.begin(), pos2) + 1 << endl;

	ilist.insert(lower_bound(ilist.begin(), ilist.end(), 5), 5);
	ilist.insert(upper_bound(ilist.begin(), ilist.end(), 5), 5);

	for(list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
		cout << *iter << " ";
	cout << endl;


	pair<list<int>::iterator, list<int>::iterator> range;
	range = equal_range(ilist.begin(), ilist.end(), 5);
	cout << distance(ilist.begin(), range.first) + 1 << endl;
	cout << distance(ilist.begin(), range.second) + 1 << endl; 

	return 0;
}

