#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/15 11:22
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 重建二叉树.py
# @Software: PyCharm

# -*- coding:utf-8 -*-
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # 返回构造的TreeNode根节点
    def reConstructBinaryTree(self, pre, tin):
        if(len(tin)>0):
            root=TreeNode(pre[0])
            pos=tin.index(pre[0],0,len(tin))
            root.left=self.reConstructBinaryTree(pre[1:1+pos],tin[0:pos])
            root.right=self.reConstructBinaryTree(pre[1+pos:],tin[pos+1:])

            return root
        return None

        # write code here