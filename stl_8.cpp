/* 迭代器和迭代器范围
 * 每一个容器都有自己的迭代器
 * 所有的迭代器接口都是一样的
 * 常用的迭代器操作 *iter  ++iter --iter iter==iter2 iter!= iter2
 * vector 和 deque 容器的迭代器的额外操作
 * iter + n   iter - n  > >= < <=
 * 迭代器范围  begin end  front back
 * 使迭代器失效的容器操作
 */

#include <iostream>
#include <vector>
#include <deque>
#include <list>

using namespace std;

int main()
{
	vector<int> a;
	deque<int> b;
	list<int> c;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);

	vector<int>::iterator iter1 = a.begin();
	cout << *iter1 << endl;
	iter1++;
	cout << *iter1 << endl;

    cout << endl;
	vector<int>::iterator iter2 = a.end();
	while (iter1 != iter2)
	{
		cout << *iter1 << endl;
		iter1++;
	}



	return 0;
}
