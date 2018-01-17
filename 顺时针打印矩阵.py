#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/15 20:25
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 顺时针打印矩阵.py
# @Software: PyCharm

# -*- coding:utf-8 -*-
class Solution:
    # matrix类型为二维列表，需要返回列表
    def printMatrix(self, matrix):
        print(matrix)
        result=[]
        # if(len(matrix)==0):return result
        if(len(matrix[0])>=1):
            for i in range(len(matrix[0])):
                result.append(matrix[0][i])
            pass
        if(len(matrix)>=2 ):
            for i in range(1,len(matrix)):
                result.append(matrix[i][len(matrix[0])-1])
            pass
        if (len(matrix[0]) >= 2 and len(matrix)>=2):
            for i in reversed(range(0,len(matrix[0])-1)):
                result.append(matrix[len(matrix)-1][i])
            pass
        if (len(matrix) >= 3 and len(matrix[0])>=2):
            for i in reversed(range(1,len(matrix)-1)):
                result.append(matrix[i][0])
            pass

        if(len(matrix)>2 and len(matrix[0])>2):
            matrix=[x[1:-1] for x in matrix[1:-1]]

            result.extend(self.printMatrix(matrix))

        return result

        # write code here
s=Solution()
print(s.printMatrix([[1,2,3,4,5]]))
# matrix=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
# print([x[1:-1] for x in matrix[1:-1]])