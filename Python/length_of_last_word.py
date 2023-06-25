class Solution:
    def lengthOfLastWord(self, m: str) -> int:
        m = m.split()
        return len(m[-1])
