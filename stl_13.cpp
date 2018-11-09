/* 容器操作
 * 适用于vector list deque
 * c.size()
 * c.max_size()
 * c.empty()
 * c.resize(n)
 * c.resize(n.t)


 * 访问元素
 * c.back()
 * c.front()
 * c[n]
 * c.at(n)
 * c[n] 和 c.at(n) 只适用于vector 和 deque容器
 */

#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main()
{
	vector<int> ivec;
	ivec.push_back(1);
	ivec.push_back(10);
	ivec.push_back(100);

	cout << ivec.front() << endl;
	cout << ivec.back() << endl;

	vector<int>::reference a = ivec.front();
	vector<int>::reference b = ivec.back();

	cout << a << endl;
	cout << b << endl;

	cout << *ivec.begin() << endl;
	cout << *--ivec.end() << endl;
	vector<int>::reference c = *ivec.begin();
	vector<int>::reference d = *--ivec.end();
	cout << c << endl;
	cout << d << endl;

	cout << ivec[0] << endl;
	cout << ivec[1] << endl;
]	cout << ivec[2] << endl;

	cout << ivec.at(0) << endl;
	cout << ivec.at(1) << endl;
	cout << ivec.at(2) << endl;
	try{
		cout << ivec.at(300) << endl;
	}catch(out_of_range) {
		cout << "out of range@!" << endl;
	}
	return 0;



}
