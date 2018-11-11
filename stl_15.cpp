/* 顺序容器的操作
 * 赋值与交换（swap）
 * c1 = c2
 * c1.swap(c2)
 * c.assign(b,e)
 * c.assign(n,t)
 * 使用assign： 类型兼容即可
 * 使用swap： 类型必须相同
 */

#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main()
{
	vector<int> a;
	vector<int> b;
	vector<int> c;


	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	b.push_back(100);
	b.push_back(200);
	b.push_back(300);
	b.push_back(400);

	c.push_back(1000);
	c.push_back(2000);
	c.push_back(3000);
	c.push_back(4000);


	a.swap(b);

	for(vector<int>::intrator iter = a.begin(); iter != a.end(); ++iter)
	{
		cout << *iter << endl;
	}

	a = b;
	for(vector<int>::intrator iter = a.begin(); iter != a.end(); ++iter)
	{
		cout << *iter << endl;
	}

	a.assign(c.begin(), c.end());
	for(vector<int>::intrator iter = a.begin(); iter != a.end(); ++iter)
	{
		cout << *iter << endl;
	}

}