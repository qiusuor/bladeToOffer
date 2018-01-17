#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
	int rectCover(int number) {
		if (number == 0) return 0;
		if (number == 1) return 1;
		vector<int> dp(number+1, 1);
		for (int i = 2; i <= number; i++) {
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		return dp[number];
	}
};
int main(void) {
	Solution s;

	system("pause");
}