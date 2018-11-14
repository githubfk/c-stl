/* stl 算法- 元素计数
 * count
 * count_if
 * 关联容器的等效成员函数
 * set.count
 * multiset.count
 * map.count
 * multimap.count
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>

using namespace std;

bool iseven(int elem) // 返回对象是bool型，称为一元谓词
{
	return elem % 2 == 0;
}
int main()
{
	vector<int> ivec;
	for (int i = 1; i <= 9; ++i)
		ivec.push_back(i);

	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << " " ;
	ivec.push_back(4);
	cout << endl;

	cout << count(ivec.begin(), ivec.end(), 4) << endl << endl; // 有几个4

	int num = count_if(ivec.begin(), ivec.end(), iseven);
	cout << num << endl << endl; // 有几个偶数
	int  num3 = count_if(ivec.begin(), ivec.end(), not1(bind2nd(modulus<int>(), 2)));
	cout << num3 << endl << endl; // 有几个偶数

    //                                             容器适配器  函数对象
    //                                                      param1  > 4
	int num2 = count_if(ivec.begin(), ivec.end(), bind2nd(greater<int>(), 6));
	cout << num2 << endl;




	cout << "************set***********" << endl;

	multiset<int> mset;
	for (int i =1; i < 9; ++i)
		mset.insert(mset.end(), i);
	mset.insert(4);
	mset.insert(5);
	mset.insert(6);

	for (multiset<int>::iterator iter = mset.begin(); iter != mset.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	int num4 = count(mset.begin(), mset.end(), 5);
	cout << num4 << endl << endl;

	int num5 = mset.count(5);
	cout << num5 << endl << endl;

}
