#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> odd;
		vector<int> even;
		for (auto i : array) {
			if (i % 2==0)
				even.push_back(i);
			else
				odd.push_back(i);
		}
		for (int i = 0; i < array.size(); i++) {
			if (i < odd.size())
				array[i] = odd[i];
			else
				array[i] = even[i - odd.size()];
		}
	}
};
int main(void) {
	Solution s;

	system("pause");
}