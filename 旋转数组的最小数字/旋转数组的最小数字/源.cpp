#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.size() == 0) return 0;
		if (rotateArray.size() == 1) return rotateArray[0];
		if (rotateArray[rotateArray.size() - 1] > rotateArray[0]) return rotateArray[0];
		for (int i = 0; i < rotateArray.size() - 1; i++) {
			if (rotateArray[i] > rotateArray[i + 1])
				return rotateArray[i + 1];
		}
		return rotateArray[0];
	}
};
int main(void) {
	Solution s;
	
	system("pause");
}