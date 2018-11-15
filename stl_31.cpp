#include <iostream>
#include <string>

using namespace std;

int main() {
	string s("annable");
	string::size_type pos = s.find("able");

	if (pos != string::npos)
		cout << "find :" << pos << endl;
	else
		cout << "no found " << endl;
	return 0;
}