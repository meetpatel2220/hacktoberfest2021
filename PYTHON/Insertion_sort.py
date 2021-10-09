arr = [5,7,8,9,1,2,6,3,4]
for i in range(len(arr)):
    x = arr[i]
    j = i
    while arr[j-1] > x and j >= 1:
        arr[j] = arr[j-1]
        j-=1
    arr[j] = x
print(arr)
