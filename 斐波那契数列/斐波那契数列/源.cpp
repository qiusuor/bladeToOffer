#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
	int Fibonacci(int n) {
		
		vector<int> dp(n+1, 1);
		for (int i=2;i<n;i++)
		{
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		return dp[n - 1];
	}
};
int main(void) {
	Solution s;
	for (int i=0;i<10;i++)
		cout << s.Fibonacci(i)<<endl;
	system("pause");
}