# this code is to implement merge sort algorithm in python

from numpy import random
import numpy as np

def mergesort(arr):
    print("call merge sort of arr",arr)
    if(len(arr)==1):
        print("return arr",arr)
        return arr
    if(len(arr)==2):
        if(arr[0]<arr[1]):
            print("return arr",arr)
            return arr
        else: 
            print("return arr",[arr[1], arr[0]])
            return [arr[1], arr[0]]
    else:
        # cut and sort first
        arr_1 = mergesort(arr[:int(len(arr)/2)])
        print("arr_1=",arr_1)
        arr_2 = mergesort(arr[int(len(arr)/2):])
        print("arr_2=",arr_2)

        i = j = 0
        arr_ans = []
        while ((i==len(arr_1) or j==len(arr_2)) == False):
            if(arr_1[i]<arr_2[j]):
                arr_ans.append(arr_1[i])
                i += 1
                flag = "i is the last"
            else:
                arr_ans.append(arr_2[j])
                j += 1
                flag = "j is the last"
        # fill another remaining array
        if (flag=="i is the last"):
            arr_ans = list(arr_ans) + list(arr_2[j:])
        else :
            arr_ans = list(arr_ans) + list(arr_1[i:])
        return arr_ans



arr = random.randint(20, size=20)
print("arr =",arr)
print("sorted array =",mergesort(arr))