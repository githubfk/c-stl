/* stl map 与 multimap
 * map(映射) maltimap(多映射)
 * 红黑树（数据结构）
 * 基本操作
 * insert: 4种方法
 * count和find
 * erase： 3种方法
 * 不能使用find进行修改
 */

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<int, string> a;
	multimap<int, string> ma;

	a.insert(map<int, string>::value_type(1, "one"));
	a.insert(map<int, string>::value_type(2, "two"));
	a.insert(map<int, string>::value_type(3, "three"));
	a.insert(make_pair(-1, "minus one"));
	a.insert(pair<int, string> (1000, "one thousand"));
	a[1000000] = "one million"; // 不能用于multimap中

	cout << "map 里面一共有" << a.size() << "个key-value对数据" << endl;
	cout << "这些数据是：" << endl;
	map<int, string>::const_iterator i;
	for (i = a.begin(); i != a.end(); ++i) {
		cout << "key: " << i->first;
		cout << "  value: " << i->second << endl;
	}

	cout << endl;
	cout << "*******************" << endl;


	ma.insert(map<int, string>::value_type(1, "one"));
	ma.insert(map<int, string>::value_type(2, "two"));
	ma.insert(map<int, string>::value_type(3, "three"));
	ma.insert(map<int, string>::value_type(-1, "minus one"));
	ma.insert(make_pair(1000, "one thousand"));
	ma.insert(pair<int, string> (1000, "one thousand"));


	multimap<int, string>::const_iterator im;
	for (im = ma.begin(); im != ma.end(); ++im) {
		cout << "key: " << im->first;
		cout << "  value: " << im->second;
		cout << endl;
	}
	cout << "multimap have " << ma.count(1000) << " ->1000" << endl;


	cout << endl;
	cout << "*******find******* " << endl;
	cout << a[3] << endl; //最简单的查找，仅适用于map

	multimap<int, string>::const_iterator fi;
	fi = ma.find(3);
	if (fi != ma.end()) {
		cout << "find " << fi->first << " = " << fi->second;
	} else {
		cout << "no find " << endl;
	}


	cout << endl << endl;
	cout << "**********erase******* " << endl;
	if (ma.erase(-1) > 0)
		cout << "erase -1 successful ! " << endl;

	multimap<int, string>::iterator ielementfound = ma.find(2);
	if (ielementfound != ma.end()) {
		ma.erase(ielementfound);
		cout << "erase 2 successful !" << endl;
	}

	ma.erase(ma.lower_bound(1000), ma.upper_bound(1000));

	return 0;

}
