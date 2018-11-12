/* stl set 与 multiset
 * set集 、multiset
 * 红黑树（数据结构）
 * 基本操作
 * insert
 * count 和 find
 * erase
 * 注意： 不能通过find进行修改 /
 */

#include <iostream>
#include <set>

using namespace std;

int main() {
	set<int> a;
	multiset<int> ma;

	a.insert(69);
	a.insert(-1);
	a.insert(200);

	set<int>::const_iterator i = a.begin();
	while (i != a.end()) {
		cout << *i << endl;
		++i;
	}
	cout << endl;

	ma.insert(a.begin(), a.end());
	ma.insert(200);

	cout << ma.count(200) << endl;
	multiset<int>::const_iterator i2 = ma.begin();
	while (i2 != ma.end()) {
		cout << *i2 << endl;
		++i2;
	}
	return 0;
}

