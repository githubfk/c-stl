#include <iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;

int main()
{
	// stack 容器适配器
	stack<int, deque<int>> a;  //默认是由deque确定
	stack<int, vector<int>> b;
	stack<int, list<int>> c;

	c.push(3);
	c.push(4);
	c.push(5);
	c.push(6);
	c.push(7);
	c.push(8);

	int x = c.top();
	cout << x << endl;

	c.pop();
	cout << c.top() << endl;

	cout << "*******" << endl;
	while(c.size() != 0)
	{
		int x = c.top();
		c.pop();
		cout << x << endl;

	}
}