/* 顺序容器的定义
 * vector
 * list
 * deque
 * 顺序容器适配器
 * stack
 * queue
 * priority_queue
 */

#include <iostream>
#include <list>
#include <deque>
#include <vector>

using namespace std;

int main()
{
	vector<string> svec;  //调用默认构造函数创建
	svec.push_back("hello");
	svec.push_back("c++");
	svec.push_back("stl");
	list<int> ilist;
	//vector<Dog> dogvec;
	//vector<Cat> catvec;
	//deque<Sales_item> items;

	vector<int> ivec; //有参数的构造函数
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(3);
	vector<int> ivec2(ivec); //必须为同种类型的

	list<string> slist(svec.begin(), svec.end()); // 可以用迭代器初始化不同类型的容器，但容器内元素必须相同
	vector<string>::iterator mid = svec.begin() + svec.size()/2;
	deque<string> front(svec.begin(), mid);
	deque<string> back(mid, svec.end());

	const char *word[] = {"sttely", "pulup", "buck", "mulligan"};
	size_t word_size = sizeof(word) / sizeof(char*);

	list<string> words2(word, word + word_size);

	const list<int>::size_type list_size = 64;
	list<string> slist2(list_size, "heelo");

	list<int> ilist2(list_size);




}
