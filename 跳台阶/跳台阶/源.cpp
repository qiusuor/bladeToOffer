#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
	int jumpFloor(int number) {
		if (number <= 1) return 1;
		vector<int> dp(number + 1, 1);
		dp[number - 1] = 1;
		for (int i = number - 2; i >= 0; i--) {
			dp[i] = dp[i + 1] + dp[i + 2];
		}
		return dp[0];
	}
};
int main(void) {
	Solution s;
	
	system("pause");
}