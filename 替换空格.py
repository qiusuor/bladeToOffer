#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/15 10:37
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 替换空格.py
# @Software: PyCharm

import re
# -*- coding:utf-8 -*-
class Solution:
    # s 源字符串
    def replaceSpace(self, s):
        m=re.compile(" ")
        s=m.sub("%20",s)
        return s
        # write code here