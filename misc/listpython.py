import re

s = input("in ja:")
print(s)
# ss = re.sub(r"[\[\]\"]","",s).split(",")
ss = re.findall(r"[a-zA-Z]+",s)
print(ss,type(ss))