def is_valid(stalls, n, maxval, c):
    cows = 1
    last_position = stalls[0]
    for i in range(1, n):
        if (stalls[i] - last_position) >= maxval:
            last_position = stalls[i]
            cows += 1
        if cows >= c:
            return True
    return False

def main():
    n, c = map(int, input().split())
    stalls = [int(input()) for _ in range(n)]
    stalls.sort()
    
    start = 1
    end = stalls[-1] - stalls[0]
    ans = -1

    while start <= end:
        mid = start + (end - start) // 2
        if is_valid(stalls, n, mid, c):
            ans = mid
            start = mid + 1
        else:
            end = mid - 1
    print(ans)

if __name__ == "__main__":
    main()
