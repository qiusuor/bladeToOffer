#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
	int  NumberOf1(int n) {
		unsigned int nn = n;
		int count = 0;
		while (nn)
		{
			if (nn % 2)
				count++;
			nn /= 2;
		}
		return count;
	}
};
int main(void) {
	Solution s;

	system("pause");
}