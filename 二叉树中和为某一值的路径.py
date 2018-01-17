#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/15 22:56
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 二叉树中和为某一值的路径.py
# @Software: PyCharm


class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
import copy
class Solution:
    # 返回二维列表，内部每个列表表示找到的路径
    def __init__(self):
        self.paths=list(list())
        self.state=dict()

    def FindPathHelp(self,root,expectNumber):
        # result=[]
        # if(expectNumber==0): result.append(self.state[root])
        if(expectNumber<=0): return

        if (root.left != None):

            lt=copy.deepcopy(self.state[root])
            lt.append(root.left.val)
            # print(lt)
            self.state[root.left] = lt
            self.FindPathHelp(root.left,expectNumber-root.left.val)
            # if(len(l)>0):
            #     result.extend(l)
        if(root.right!=None):
            rt=copy.deepcopy(self.state[root])
            rt.append(root.right.val)

            self.state[root.right]=rt
            self.FindPathHelp(root.right, expectNumber - root.right.val)
            # if (len(r) > 0):
            #     result.extend(r)


    def FindPath(self, root, expectNumber):
        if(root==None):
            return []
        else:
            self.state[root]=[root.val]
            self.FindPathHelp(root,expectNumber-root.val)
            result =[]

            stk=[]
            stk.append(root)
            while(len(stk)):
                key=stk.pop()
                if (key.right == None and key.left == None and key in self.state.keys() and sum(self.state[key]) == expectNumber):
                    result.append(self.state[key])
                if (key.right != None):
                    stk.append(key.right)
                if(key.left!=None):
                    stk.append(key.left)

            # for key in self.state.keys():
            #     if(key.right==None and key.left==None and sum(self.state[key])==expectNumber):
            #         result.append(self.state[key])
            return result


s=Solution()
root=TreeNode(10)
root.left=TreeNode(5)
root.right=TreeNode(12)
root.left.left=TreeNode(4)
root.left.right=TreeNode(7)
print(s.FindPath(root,15))

        # write code here