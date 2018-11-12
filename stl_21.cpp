/* string 对象的比较
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1("abcsdsfd");
	string s2("absllkjsf");
	const char *cp = "aavxxz";

	if (s1 != s2) cout << "no same" << endl;
	if (s1 > s2)  cout << "s1 bigger" << endl;
	if (s1 < s2)  cout << "s2 bigger" << endl;
	if (s1 == s2) cout << "the same" << endl;

	cout << endl;

	if (s1.compare(s2) > 0) cout << "s1 bigger" << endl;
	if (s1.compare(s2) < 0) cout << "s2 bigger" << endl;
	if (s1.compare(s2) == 0) cout << "the same" << endl;

	cout << endl;

	if (s1.compare(3,3,s2) > 0) cout <<"s1 bigger" << endl;
	if (s1.compare(3,3, s2,3,3) == 0) cout << "the same" << endl;


	cout << endl;
	if (s1.compare(3,3,cp,3,3) > 0) cout << "s1 bigger" << endl;
}
