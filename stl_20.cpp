/* string 类型的查找
 * s.find(args)
 * s.rfind(args)
 * s.find_first_of(args)
 * s.find_last_of(args)
 * s.find_first_not_of(args)
 * s.find_last_not_of(args)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name("annnaBlelle");
	string::size_type pos1 = name.find("lel");
	if(pos1 == string::npos)
		cout << "no find" << endl;
	else
		cout << "find at " << pos1 << endl;


	name = "r2d3f8s9";
	string numerics("0123456789");
	string::size_type pos = 0;
	while((pos = name.find_first_of(numerics, pos)) != string::npos) {
		cout << name[pos] << endl;
		++pos;
	}
	
	string letters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	pos = 0;
	while ((pos = name.find_first_of(letters, pos)) != string::npos) {
		cout << name[pos] << endl;
		++pos;
	}
	return 0;
}