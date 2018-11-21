/* stl算法 - 区间的比较
 * equal(b,e,b2)
 * equal(b,e,b2,p)
 * mismatch(b,e,b2)
 * mismatch(b,e,b2,p)
 * lexicographical_compare(b,e,b2,e2)
 * lexicographical_compare(b,e,be,e2,p)
 */

/* stl算法 - 复制元素（copying)
 * copy()
 * copy_backward()
 * 注意
 * 1、没有copy_if()算法，可以使用remove_copy_if()算法
 * 2、复制过程中要逆转元素次序，使用reverse_copy()算法
 * 3、把容器内所有元素赋值给另一个容器，要使用赋值操作符或容器的assign()成员函数
 * 4、复制过程中删除某些元素，使用remove_copy() 和 remove_copy_if() 算法
 * 5、复制中改变元素，使用transform() 或 repalce_copy() 算法
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main() {
	list<int> ilst;
	for (int i = 0; i <= 9; ++i)
		ilst.push_back(i);

	for (list<int>::iterator iter = ilst.begin(); iter != ilst.end(); ++iter)
		cout << *iter << "  ";
	cout << endl;

	vector<int> ivec(ilst.size() *2);
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "  ";
	cout << endl;

	copy(ilst.begin(), ilst.end(), ivec.begin());
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "  ";
	cout << endl;

	copy_backward(ilst.begin(), ilst.end(), ivec.end());
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "  ";
	cout << endl;
}
