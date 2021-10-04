

def partition(top, end, array):

	pivot_index = top
	pivot = array[pivot_index]
	

	while top < end:
		
	
		while top < len(array) and array[top] <= pivot:
			top += 1
			
		
		while array[end] > pivot:
			end -= 1
		
		
		if(top < end):
			array[top], array[end] = array[end], array[top]
	

	array[end], array[pivot_index] = array[pivot_index], array[end]
	

	return end
	

def quick_sort(top, end, array):
	
	if (top < end):
		
	
		p = partition(top, end, array)
		
	
		quick_sort(top, p - 1, array)
		quick_sort(p + 1, end, array)
		

array = [ 10, 7, 8, 9, 1, 5 ]
quick_sort(0, len(array) - 1, array)

print(f'Sorted array: {array}')
	

