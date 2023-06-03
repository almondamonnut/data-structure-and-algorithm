# this code is to implement binary search

def binary_search(listA, start, end, target):
    # this function is working based on
    # assumption that the given list is already sorted
    while(end >= start):
        mid = int((start + end)/2)
        if (listA[mid]==target):
            return mid
        else:
            if (listA[mid] < target):
                start = mid+1
            else:
                end = mid-1
    return -1
            
listA = [0,10,20,30,40,50,60,70,80,90,100,102,104,105]
for target in listA:
    print("index of target is",binary_search(listA, 0, len(listA)-1, target))