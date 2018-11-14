/* stl算法 - 最大值和最小值
 * min_element(b,e)
 * min_element(b,e,op)
 * max_element(b,e)
 * max_element(b,e,oo)
 */

#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

bool absless(int elem1, int elem2) {
	return abs(elem1) < abs(elem2);
}

int main() {
	deque<int> ideq;
	for (int i = 2; i < 8; ++i)
		ideq.insert(ideq.end(), i);
	for (int i = -3; i <= 5; ++i)
		ideq.insert(ideq.end(), i);

	for (deque<int>::iterator iter =ideq.begin(); iter != ideq.end(); ++iter)
		cout << *iter << " ";
	cout << endl;


	deque<int>::iterator result = min_element(ideq.begin(), ideq.end());
	cout << *result << endl; // 最小值
	cout << *max_element(ideq.begin(), ideq.end()) << endl;


	cout << *min_element(ideq.begin(), ideq.end(), absless) << endl; // 绝对值最小值
	cout << *max_element(ideq.begin(), ideq.end(), absless) << endl; //绝对值最大值
}
