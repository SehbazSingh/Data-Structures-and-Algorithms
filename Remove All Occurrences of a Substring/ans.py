class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        p = len(part)
        part_arr = [c for c in part]
        stack = []

        for c in s:
            stack.append(c)
            while len(stack) >= p and stack[-p:] == part_arr:
                stack = stack[:-p]
        
        return "".join(stack)


        
