/* vector容器的自增长
 * vector 是用数组做出来的，兼顾数组的缺点和优点
 * capacity 和 reserve成员
 */

#include <iostream>
#include <vector>

using namespace std;

int main(){
	int  a[10];
	a[0] = 10;
	a[1] = 11;
	a[2] = 12;
	a[9] = 90;

	int b[100];
	vector<int> ivec;
	cout << "number: " << ivec.size() << " capacity" << ivec.capacity() << endl;

	ivec.push_back(1);
	cout << "number: " << ivec.size() << " capacity" << ivec.capacity() << endl;

	ivec.push_back(10);
	cout << "number: " << ivec.size() << " capacity" << ivec.capacity() << endl;

	ivec.reserve(100);
	cout << "number: " << ivec.size() << " capacity" << ivec.capacity() << endl;


}
