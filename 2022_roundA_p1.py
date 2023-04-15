#   Double or One Thing

"""
Problem

You are given a string of uppercase English letters. 
You can highlight any number of the letters (possibly all or none of them). 
The highlighted letters do not need to be consecutive. 
Then, a new string is produced by processing the letters from left to right: 
non-highlighted letters are appended once to the new string, 
while highlighted letters are appended twice.

Double or One Thing example.

For example, if the initial string is HELLOWORLD, 
you could highlight the H, the first and last Ls and the last O to obtain
HELLOWORLD ⇒ HHELLLOWOORLLD.

Similarly, if you highlight nothing, you obtain HELLOWORLD, 
and if you highlight all of the letters, you obtain HHEELLLLOOWWOORRLLDD. 
Notice how each occurrence of the same letter can be highlighted independently.

Given a string, there are multiple strings that can be obtained as a result of this process, 
depending on the highlighting choices. 
Among all of those strings, output the one that appears first in alphabetical 
(also known as lexicographical) order.

Note: A string s appears before a different string t in alphabetical order 
if s is a prefix of t 
or if at the first place s and t differ, 
the letter in s is earlier in the alphabet than the letter in t. 
For example, these strings are in alphabetical order: CODE, HELLO, HI, HIM, HOME, JAM.


Input
The first line of the input gives the number of test cases, T. T test cases follow. 
Each test case is described in a single line containing a single string S.


Output
For each test case, output one line containing Case #x: y, 
where x is the test case number (starting from 1) 
and y is the string that comes first alphabetically 
from the set of strings that can be produced from S by the process described above.


Limits
Time limit: 2 seconds.
Memory limit: 1 GB.
1≤T≤100
Each character of S is an uppercase letter from the English alphabet.

Test Set 1 (Visible Verdict)
1 ≤ the length of S ≤ 10

Test Set 2 (Hidden Verdict)
1 ≤ the length of S ≤ 100

Sample Input
3
PEEL
AAAAAAAAAA
CODEJAMDAY

Sample Output
Case #1: PEEEEL
Case #2: AAAAAAAAAA
Case #3: CCODDEEJAAMDAAY

In Sample Case #1, these are all the strings that can be obtained, in alphabetical order: 
PEEEEL, PEEEELL, PEEEL, PEEELL, PEEL, PEELL, PPEEEEL, PPEEEELL, PPEEEL, PPEEELL, PPEEL, and PPEELL.
"""

# naive approach

n = int(input())
text = []
for i in range(n):
    text.append(input())

modified_text = ["" for i in range(n)]
for i in range(n):
    thislinetext = text[i]
    modified_text[i] = thislinetext
    jj=0
    hold = 1 # to keep track of the same character
    # let's look inside thisline's text
    for j in range(len(thislinetext)):
        # if not the final character (for final character, we'll do nothing with it. ยิ่งต่อยิ่งยาวขึ้น 没有用)
        if (j < len(thislinetext)-1): 
            # ถ้าเท่ากัน นับไว้
            if (thislinetext[j] == thislinetext[j+1]):
                hold += 1
            # ถ้าน้อยกว่า ต่อ
            elif (thislinetext[j] < thislinetext[j+1]):
                modified_text[i] = modified_text[i][:jj] + modified_text[i][jj]*hold + modified_text[i][jj:]
                jj += hold
                hold = 1
            else:
                hold = 1
        jj+=1

    print(f"Case #{i+1}: {modified_text[i]}")