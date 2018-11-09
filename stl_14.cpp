/* 顺序容器的操作
 * 删除元素
 * c.erase(p)
 * c.erase(b,e)
 * c.clear()
 * c.pop_back()
 * c.pop_front()
 * c.pop_front() 只适用于list和deque容器
 */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	list<string> ilst;
	ilst.push_back("apple");
	ilst.push_back("bill");
	ilst.push_back("cat");
	ilst.push_back("dog");
	ilst.push_back("girl");
	ilst.push_back("fish");

	string s1("dog");
	list<string>::iterator iter1 = find(ilst.begin(), ilst.end(), s1);
	if(iter1 != ilst.end())
		ilst.erase(iter1);
	else
		cout << "no found" << endl;

	for (list<string>::iterator iter = ilst.begin(); iter != ilst.end(); ++iter)
		cout << *iter << endl;

	ilst.clear();
	ilst.erase(ilst.begin(), ilst.end());


 
}
