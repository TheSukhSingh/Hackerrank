if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))

    top1 = top2 = float('-inf')  
    
    for i in range(len(arr)):
        temp = arr[i]
        if temp > top1:
            top2 = top1
            top1 = temp
        elif temp > top2 and temp != top1:
            top2 = temp

    print(top2)
