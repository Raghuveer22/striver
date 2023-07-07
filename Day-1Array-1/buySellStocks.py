import sys
import os
from collections import *
from math import *

def maximumProfit(prices):
    profit=0
    min_price=2**31
    for x in prices:
        if x<min_price:
            min_price=x
        profit=max(profit,x-min_price)
    return profit