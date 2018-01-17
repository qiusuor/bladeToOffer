#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/15 22:29
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 二叉搜索树的后序遍历序列.py
# @Software: PyCharm

# -*- coding:utf-8 -*-
class Solution:
    def VerifySquenceOfBSTHelp(self,sequence):
        if (len(sequence) == 0):
            return True
        elif (len(sequence) == 1):
            return True

        left = -1
        f = False
        for i in range(len(sequence)):
            if (f == False and sequence[i] > sequence[len(sequence) - 1]):
                f = True
                left = i - 1
            if (f == True and sequence[i] < sequence[len(sequence) - 1]):
                return False
        f = False
        right = len(sequence) - 1
        for i in reversed(range(len(sequence) - 1)):
            if (f == False and sequence[i] < sequence[len(sequence) - 1]):
                right = i + 1
                f = True
            if (f == True and sequence[i] > sequence[len(sequence) - 1]):
                return False

        if (left >= 0 and right <= len(sequence) - 2):
            return self.VerifySquenceOfBSTHelp(sequence[:left + 1]) and self.VerifySquenceOfBSTHelp(sequence[right:-1])
        elif (left >= 1):
            return self.VerifySquenceOfBSTHelp(sequence[:left + 1])
        else:
            return self.VerifySquenceOfBSTHelp(sequence[right:-1])
    def VerifySquenceOfBST(self, sequence):
        # write code here
        if(len(sequence)==0): return False
        return self.VerifySquenceOfBSTHelp(sequence)

s=Solution()
print(s.VerifySquenceOfBST([4,6,7,5]))