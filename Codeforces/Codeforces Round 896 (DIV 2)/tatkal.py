def reArrange(arr, n):

	arr.sort()

	op = [0] * n

	mid = int((n-1)/2)
	j = 1
	i = 1
	op[mid] = arr[0]
	for i in range(1,mid+1):
	
		op[mid+i] = arr[j]
		j+=1
		op[mid-i] = arr[j]
		j+=1
	
	if (int(n%2) == 0):
		op[mid+i] = arr[j]

	print(op)




ele=input()

arr=ele.split()
arr=[int(i) for i in arr]
n=len(arr)
reArrange(arr, n)

