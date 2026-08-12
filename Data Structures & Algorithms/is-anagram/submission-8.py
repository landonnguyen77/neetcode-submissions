class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hashS, hashT = {}, {}
        for letter in s:
            hashS[letter] = hashS.get(letter, 0) + 1
        for letter in t:
            hashT[letter] = hashT.get(letter, 0) + 1
        return hashS == hashT