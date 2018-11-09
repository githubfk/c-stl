/* 顺序容器的操作
 * 关系运算符
 * 所有的容器类型都可以使用
 * 比较的容器必须具有相同的容器类型
 * 容器的比较都是基于容器元素的比较
 * 容器内元素必须有相应的关系运算符
 */

#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;
int main()
{
	vector<int> ivec1;
	vector<int> ivec2;

	ivec1.push_back(1);
	ivec1.push_back(3);
	ivec1.push_back(5);
	ivec1.push_back(7);
	ivec1.push_back(9);
	ivec1.push_back(12);

	ivec2.push_back(2);
	ivec2.push_back(4);
	ivec2.push_back(6);
	ivec2.push_back(8);
	ivec2.push_back(10);
	ivec2.push_back(12);

	if(ivec1 > ivec2)
		cout << "ivec1 bigger!" << endl;
	if (ivec1 != ivec2)
		cout << "no same" << endl;
	

	return 0;
}