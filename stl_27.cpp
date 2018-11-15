/* stl 算法- 查找算法
 * find()
 * find_if()
 * search_n()
 * search()
 * find_each()
 * find_first_of()
 * adjacent_find()
 */
/* find()
 * find_if()  //查找速度较慢，线性查找
 * 注意
 * 1、如果是已序区间，可以使用已序区间查找算法
 * 2、关联式容器有等效的成员函数
 * 3、string有等效的成员函数find()
 */
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
	list<int> ilst;
	for (int i = 1; i <= 9; ++i)
		ilst.insert(ilst.end(), i);
	for (int i = 1; i <= 9; ++i)
		ilst.insert(ilst.end(), i);

	for (list<int>::iterator iter = ilst.begin(); iter != ilst.end(); ++iter)
		cout << *iter << "  ";
	cout << endl;

	list<int>::iterator pos1;
	pos1 = find(ilst.begin(), ilst.end(), 4);

	list<int>::iterator pos2;
	if (pos1 != ilst.end()) {
		pos2 = find(++pos1, ilst.end(), 4);
	}

	if (pos1 != ilst.end() && pos2 != ilst.end()) {
		--pos1;
		++pos2;
		for (list<int>::iterator iter = pos1; iter != pos2; ++iter)
			cout << *iter << "  ";
	}
	cout << endl;

}
