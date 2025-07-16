class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False

        freq = [0] * 26
        winfreq = [0] * 26

        for c in s1:
            freq[ord(c) - ord('a')] += 1


        for i in range(len(s1)):
            winfreq[ord(s2[i]) - ord('a')] += 1


        if freq == winfreq:
            return True


        for i in range(len(s1), len(s2)):
            winfreq[ord(s2[i - len(s1)]) - ord('a')] -= 1
            winfreq[ord(s2[i]) - ord('a')] += 1
            if freq == winfreq:
                return True

        return False
