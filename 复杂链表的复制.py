#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/16 11:55
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 复杂链表的复制.py
# @Software: PyCharm


# -*- coding:utf-8 -*-
class RandomListNode:
    def __init__(self, x):
        self.label = x
        self.next = None
        self.random = None
class Solution:
    # 返回 RandomListNode
    def Clone(self, pHead):
        if(pHead==None): return None

        m=dict()
        Head = RandomListNode(pHead.label)
        p=Head
        cur=pHead.next
        m[pHead]=Head
        while(cur!=None):
            t=RandomListNode(cur.label)
            m[cur] = t
            cur=cur.next
            p.next=t
            p=t

        p=Head
        cur=pHead
        while(cur!=None):
            if(cur.random!=None):
                p.random=m[cur.random]
            p=p.next
            cur=cur.next

        return Head

        # write code here