// queue 队列  是一种容器适配器

// list  deque   vector
// queue : 用list 做 queue
//         用deque做queue
//         不能用vector做queue

// queue<int, deque<int>>
// queue<int, list<int>>
// q.empty()  q.size() q.front()  q.back()  q.pop()  q.push()

// deque 和 stack 都没有迭代器

#include <iostream>
#include <queue>
#include <list>
#include <deque>

using namespace std;

int main()
{
	queue<int, deque<int>> a;
	queue<int, list<int>> b;

	queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	cout << "现在队列里面有" << q.size() << "个数据" << endl;
	cout << "队首的数据"  << q.front() << endl;
	cout << "队尾的数据" << q.back() << endl;

	q.pop();
	cout << "pop以后，新队首的数据" << q.front() << endl;
	while (q.size() != 0)
	{
		cout << "删除： " << q.front() << endl;
		q.pop();
	}
	if (q.empty())
		cout << "done!" << endl;
	return 0;

}
