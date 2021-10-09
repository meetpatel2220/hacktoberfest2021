arr = [5,7,8,9,1,2,6,3,4]
n = len(arr)
for i in range(n-1):
    for j in range(0, n-i-1):
        if arr[j] > arr[j + 1]:
            arr[j], arr[j + 1] = arr[j + 1],arr[j]
for i in range(len(arr)):
    print(arr[i],end = " ")
