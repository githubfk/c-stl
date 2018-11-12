/* 修改string对象的方法
 * 只适合string类型的操作
 * 三个sbustr重载函数
 * 六个append重载函数
 * 十个replace重载函数
 */


#include <iostream>
#include <string>

using namespace std;

int main(){

	string s("hellp, wowjwojo");
	string s3 = s.substr(3, 6);
	cout << s3 << endl;

	string s4 = s.substr(3);
	cout << s4 << endl;

	string s5 = s.substr(); // s5 = s;
	cout << s5 << endl;

	cout << "**************" << endl;

	s = "c++ primer";
	s.append(" 3rd editor!");
	cout << s << endl;

	s.insert(s.size(), "  hello, world!");
	cout << s << endl;

	s.replace(11, 3, "4th");
	cout << s << endl;

	s.replace(11, 3, "fourth");
	cout << s << endl;

	return 0;
}
