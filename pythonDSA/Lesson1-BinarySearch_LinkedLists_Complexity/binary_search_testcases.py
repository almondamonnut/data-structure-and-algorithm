tests = []

# 2.1 answer is somewhere in the middle
tests.append({
    'input': {
        'cards_list' : [13, 11, 10, 7, 4, 3, 1, 0],
        'query_num' : 7
    },
    'output' : [3]
})

# 2.2 answer is the first index
tests.append({
    'input': {
        'cards_list' : [13, 11, 10, 7, 4, 3, 1, 0],
        'query_num' : 13
    },
    'output' : [0]
})

# 2.3 answer is the last index
tests.append({
    'input': {
        'cards_list' : [13, 11, 10, 7, 4, 3, 1, 0],
        'query_num' : 0
    },
    'output' : [7]
})

# 2.4 there is only 1 element in list which is also the answer
tests.append({
    'input': {
        'cards_list' : [9],
        'query_num' : 9
    },
    'output' : [0]
})

# 2.5 no answers in the given list
tests.append({
    'input': {
        'cards_list' : [13, 11, 10, 7, 4, 3, 1],
        'query_num' : 0
    },
    'output' : [None]
})

# 2.6 the list contains repeting numbers and that is the answer
tests.append({
    'input': {
        'cards_list' : [13, 11, 11, 11, 10, 7, 4, 3, 1],
        'query_num' : 11
    },
    'output' : [1,2,3]
})

# 2.7 the list contains repeting numbers and that is not the answer
tests.append({
    'input': {
        'cards_list' : [13, 11, 11, 11, 10, 7, 4, 3, 1],
        'query_num' : 10
    },
    'output' : [4]
})

# 2.8 the list contain negative number
tests.append({
    'input': {
        'cards_list' : [13, 2, 0, -1, -4, -90],
        'query_num' : -4
    },
    'output' : [4]
})

# 2.9 the list is empty
tests.append({
    'input': {
        'cards_list' : [],
        'query_num' : 11
    },
    'output' : [None]
})