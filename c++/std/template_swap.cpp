/*************************************************************************
	> File Name: template_swap.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 20 Nov 2020 09:35:35 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;
template<typename T>
void my_swap(T& a, T& b)
{
  	T c = a;
  	a = b;
  	b = c;
}
int main()
{
  	double a1 = 1.3, a2 = 2.1;
  	char b1 = 'a', b2 = 'b';
  	my_swap(a1, a2);
  	my_swap(b1, b2);
  	cout << a1 << " " << a2 << endl;
  	cout << b1 << " " << b2 << endl;
  	return 0;
}
