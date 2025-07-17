class Solution:
    def compress(self, chars: List[str]) -> int:
        acount = 0
        element = chars[0]
        count = 1

        for i in range(1, len(chars)):
            if chars[i] == element:
                count += 1
            else:
                chars[acount] = element
                acount += 1
                if count > 1:
                    for c in str(count):
                        chars[acount] = c
                        acount += 1
                element = chars[i]
                count = 1

        chars[acount] = element
        acount += 1
        if count > 1:
            for c in str(count):
                chars[acount] = c
                acount += 1

        return acount


        
