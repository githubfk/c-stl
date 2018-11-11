/* 容器的使用
 * 顺序容器
 * vector的优点和缺点
 * list的优点和缺点
 * deque的优点和缺点
 * 插入操作如何影响容器的选择
 * 元素的访问如何影响容器的选择
 * 容器类型的提示
 */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>


using namespace std;

int main()
{
	vector<int> v;
	list<int> l;
	deque<int> d;

	v.push_back(1);
	v.push_back(222);
	v.push_back(3);

	vector<int>::iterator vi = v.begin();
	++vi;
	v.insert(vi, 10);

	vi = v.begin();
	++vi;
	v.erase(vi);  //vector 插入和删除的速度都慢于list， 但其有较好的查找性能

    sort(v.begin(), v.end());
    if (binary_search(v.begin(), v.end(),222))
        cout << "find " << endl;
    else
        cout << "no find" << endl;

	for (auto &m : v)
		cout << m << endl;
	cout << "****************" << endl;

	d.push_back(1);
	d.push_front(3); // 既可以向前插入，又可以向后插入， 速度稍小于vector， 有较好的查找速度。






}
