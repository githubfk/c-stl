/* 算法分类
 * 非修改性算法
 * 修改性算法
 * 移除性算法
 * 变序性算法
 * 排序算法
 * 已序区间算法
 * 数值算法

 **********
 * stl 函数对象简介
 * 预定义的函数对象
 * 自定义的函数对象
 * 容器和函数对象
 * 算法和函数对象
 */

#include <iostream>
#include <set>
#include <algorithm>
#include <vector>


using namespace std;

void print(int elem) {
	cout << elem << endl;
}

// 函数对象
class PrintInt
{
public:
	void operator() (int elem) const {
		cout << elem << endl;
	}
};

int main() {
	set<int> a; //自动排序的红黑树,默认为less<int>
	set<int, less<int>> b;
	set<int, greater<int>> c;

	a.insert(19);
	a.insert(-9);
	a.insert(3339);
	a.insert(91);
	a.insert(911);
	a.insert(19);

	c.insert(19);
	c.insert(-9);
	c.insert(3339);
	c.insert(91);
	c.insert(911);
	c.insert(19);

	for (set<int>::iterator iter = a.begin(); iter != a.end(); ++iter)
		cout << *iter << endl;

	cout << endl;

	for (set<int, greater<int>>::iterator iter = c.begin(); iter != c.end(); ++iter)
		cout << *iter << endl;

	vector<int> ivec;
	for (int i = 1; i < 9; ++i)
		ivec.push_back(i);

	cout << endl;
	for_each(ivec.begin(), ivec.end(), print);
	cout << endl;
	for_each(ivec.begin(), ivec.end(), PrintInt());
	return 0;
}

