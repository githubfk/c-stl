/* stl 算法 - 查找算法
 * find_first_of(b,e,sb,se)
 * find_first_of(b,e,sb,se,bp)
 * 使用逆向迭代器
 * 没有find_last_of

 * strign函数         stl算法
  find()                find()
  rfind()               find + 逆向迭代器
  find()                search()
  rfind()               find_end()
  find_first_of()       find_first_of()
  find_last_of()        find_first_of() + 逆序迭代器
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main() {
	vector<int> ivec;
	list<int> searchlist;

	for (int i = 1; i < 11; ++i)
		ivec.push_back(i);

	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "  ";
	cout << endl;

	searchlist.push_back(3);
	searchlist.push_back(6);
	searchlist.push_back(9);

	vector<int>::iterator pos;
	pos = find_first_of(ivec.begin(), ivec.end(), searchlist.begin(),searchlist.end());

	if (pos != ivec.end())
		cout << "find :" << distance(ivec.begin(), pos) + 1 << endl;
	else
		cout << "no found" << endl;

	return 0;
}
