// 优先级队列 priority_queue
// 自适应容器（容器适配器）：不能使用list
// 最大值优先级队列、最小值优先级队列
// priority_queue<int, deque<int>> pq;
// priotity_queue<int, vector<int>> pq;
// pq.empty()  pq.size() pq.top() pq.pop()  pq.push()

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	priority_queue<int> pq; // 默认以vector构造
	priority_queue<int, vector<int>> pq1; // 最大值优先级队列
	priority_queue<int, deque<int>, greater<int>> pq2; //最小值优先级队列


	pq.push(1);
	pq.push(-3);
	pq.push(30);
	pq.push(20);
	pq.push(11);
	pq.push(111);

	cout << "优先级对列里一共有" << pq.size() << "个元素" << endl;
	cout <<pq.top() << endl;

	while(!pq.empty())
	{
		cout << "delete: " << pq.top() << endl;
		pq.pop();
	}

	if (pq.empty())
		cout << "done!" << endl;


	cout << "**********" << endl;
	pq2.push(1);
	pq2.push(-3);
	pq2.push(30);
	pq2.push(20);
	pq2.push(11);
	pq2.push(111);

	cout << "优先级对列里一共有" << pq2.size() << "个元素" << endl;
	cout <<pq2.top() << endl;

	while(!pq2.empty())
	{
		cout << "delete: " << pq2.top() << endl;
		pq2.pop();
	}
	if (pq2.empty())
		cout << "done!" << endl;



}
