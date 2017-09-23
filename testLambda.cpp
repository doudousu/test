#include <iostream>
#include <functional>
using namespace std;

int main()
{
	int a = 1;
	auto func = [a](int x, int y) { return a + x + y; };

	cout << func(2, 3) << endl;

	// function ÌØÐÔ²âÊÔ
	function<int(int, int)> funcAdd = func;
	cout << func(3, 4) << endl;

	return 0;
}
