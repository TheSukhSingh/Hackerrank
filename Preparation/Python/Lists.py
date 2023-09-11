
lisst = []
N = int(input())
for i in range(N):
    command = input().split()
    if command[0] == 'sort':
        lisst.sort()
    elif command[0] == 'pop':
        lisst.pop()
    elif command[0] == 'reverse':
        lisst.reverse()
    elif command[0] == 'insert':
        lisst.insert(int(command[1]), int(command[2]))
    elif command[0] == 'remove':
        lisst.remove(int(command[1]))
    elif command[0] == 'append':
        lisst.append(int(command[1])) 
    else:
        print(lisst)
    