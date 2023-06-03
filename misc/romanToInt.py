class Solution:
    def romanToInt(self, s: str) -> int:
        romanDict = dict()
        romanDict["I"] = 1
        romanDict["V"] = 5
        romanDict["X"] = 10
        romanDict["L"] = 50
        romanDict["C"] = 100
        romanDict["D"] = 500
        romanDict["M"] = 1000

        s = s.replace("IV","IIII").replace("IX", 'VIIII').replace("XL","XXXX").replace("XC","LXXXX").replace("CD","CCCC").replace("CM","DCCCC")

        num = 0
        for ch in s:
            # print(ch)
            num += romanDict[ch]
            # print(romanDict[ch])

        return num
    
a = Solution()
print(a.romanToInt("MCMXCIV"))