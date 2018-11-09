/* 顺序容器的操作
 * 在顺序容器中添加元素
 * c.push_back(t)
 * c.push_front(t)
 * c.insert(p,t)
 * c.insert(p,n,t)
 * c.insert(p,b,e)
 * 容器元素都是副本
 * 添加元素可能会使迭代器失效
 * 避免存储end操作返回的迭代器
 */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>

using namespace std;

int main()
{
	vector<string> svec;
	list<string> slist;
	deque<string> sdeq;

	svec.push_back("bill");
	slist.push_back("tom");
	sdeq.push_back("mary");


	slist.push_front("tom");
	sdeq.push_front("mary"); //vector 不能使用push_front;

	for (list<string>::iterator iter = slist.begin(); iter != slist.end(); ++iter)
		cout << *iter << endl;
	



}

