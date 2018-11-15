/* stl算法-- 查找算法
 * 关联容器有自己的成员函数find()  对数复杂度，速度快
 */

#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> iset;
	iset.insert(34);
	iset.insert(-1);
	iset.insert(33);
	iset.insert(12);

	for (set<int>::iterator iter = iset.begin(); iter != iset.end(); ++iter)
		cout << *iter << "  ";
	cout << endl;


	set<int>::iterator pos;
	pos = iset.find(33);

	if (pos != iset.end())
		cout << "find:  " << *pos << endl;
	else
		cout << "no found" << endl;
	return 0;
}
