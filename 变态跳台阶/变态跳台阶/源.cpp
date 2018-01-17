#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
	int jumpFloorII(int number) {
		if (number <= 1) return 1;
		return 1 << number - 1;
	}
};
int main(void) {
	Solution s;

	system("pause");
}