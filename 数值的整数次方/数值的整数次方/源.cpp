#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
	double Power(double base, int exponent) {
		if (exponent == 0) return 1;
		if (exponent == 1) return base;
		if (exponent == -1) return 1/base;
		bool f = false;
		if (exponent<0)
		{
			f = true;
		}
		if (exponent % 2) {
			double tmp = Power(base, exponent / 2);
			if (!f)
				return tmp*tmp*base;
			else
				return tmp*tmp / base;
		}
		else {
			double tmp = Power(base, exponent / 2);
			return tmp*tmp;
		}
	}
};
int main(void) {
	Solution s;

	system("pause");
}