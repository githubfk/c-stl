/* 构造string 对象的方法
 * string s
 * string s(s2)
 * string s("value")
 * string s(n, 'c')
 * string s(b, e)
 * string s(cp, n)
 * string s(s2, pos2)
 * string s(s, pos2, len2)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << s << endl;

	string s2(3,'a');
	cout << s2 << endl;

	string s3(s2);
	cout << s3 << endl;

	string s4(s3.begin(), s3.begin()+s3.size()/2);
	cout << s4 << endl;

	char *cp = "hiya"; // C语言的字符串
	char c_array[] = "hello"; //C语言的字符串
	char no_null[] = {'h', 'e', 'l', 'l', 'o'}; //C语言的字符数组

	string ss1(cp);
	cout << ss1 << endl;

	string ss2(c_array);
	cout << ss2 << endl;

	string sss2(c_array, 3);
	cout << sss2 << endl;


	string ss3(no_null, 4);
	cout << ss3 << endl;
}