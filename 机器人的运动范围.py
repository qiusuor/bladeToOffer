#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/16 12:07
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 机器人的运动范围.py
# @Software: PyCharm

# -*- coding:utf-8 -*-
class Solution:
    def movingCountHelp(self,i,j,count,visited,threshold,rows, cols):
        if(visited[i][j]==False):
            visited[i][j]=True
        else: return
        # print(i,j)
        # print(sum([int(k) for k in list(str(i))])+sum([int(k) for k in list(str(j))]))
        if(sum([int(k) for k in list(str(i))])+sum([int(k) for k in list(str(j))])<=threshold):
            # print(i, j)
            count[0]+=1
            # print(count[0])
            if(i-1>=0 ):
                self.movingCountHelp(i-1,j,count,visited,threshold,rows, cols)
            if(i+1<rows):
                self.movingCountHelp(i + 1, j, count, visited, threshold,rows, cols)
            if (j + 1 < cols):
                self.movingCountHelp(i , j+1, count, visited, threshold, rows, cols)
            if (j-1 >=0):
                self.movingCountHelp(i, j-1, count, visited, threshold, rows, cols)



    def movingCount(self, threshold, rows, cols):
        visited = [[False for i in range(cols)] for j in range(rows)]
        count=[0]
        i=0
        j=0
        self.movingCountHelp(i,j,count,visited,threshold,rows, cols)
        return count[0]


        # write code here
s=Solution()
print(s.movingCount(10,1,100))