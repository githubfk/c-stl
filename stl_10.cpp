/* 顺序容器的操作
 * vector list deque
 * 容器定义的类型别名
 * begin 和 end
 */

#include <iostream>
#include <list>
#include <vector>
#include <deque>

using namespace std;

int main()
{
	vector<int> a;
	list<int> b;
	deque<int> c;

	vector<int>::size_type              a1;
	vector<int>::iterator               a2;
	vector<int>::const_iterator         a3;
	vector<int>::reverse_iterator       a4; //逆序迭代器
	vector<int>::const_reverse_iterator a5;
	vector<int>::difference_type        a6;

	vector<int>::value_type             a7;
	vector<int>::reference              a8;
	//vector<int>::const_reference        a9; // list 和 deque类似

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);

	for (vector<int>::size_type i = 0; i < a.size(); ++i)
		cout << a[i] << endl;

}