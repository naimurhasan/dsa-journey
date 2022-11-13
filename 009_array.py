import array

# array displayer  
def displayArr(arr: array.array):
    print("Displaying Array: ", end=" ")
    for i in arr:
        print(i, end=" ")
    print("")

# initializing array
arr = array.array('i', [1, 2, 3])
displayArr(arr)

# adding a new value
arr.append(5)
displayArr(arr)

# inserting at a custom position
arr.insert(2, 8)

# printing array manullay
print("Printing manually: ", end=" ")
for i in range(len(arr)):
    print(arr[i], end=" ")

# array(data type, value list):
# ‘b’	signed char	int	1
# ‘B’	unsigned char	int	1
# ‘u’	Py_UNICODE	unicode character	2
# ‘h’	signed short	int	2
# ‘H’	unsigned short	int	2
# ‘i’	signed int	int	2
# ‘I’	unsigned int	int	2
# ‘l’	signed long	int	4
# ‘L’	unsigned long	int	4
# ‘q’	signed long long	int	8
# ‘Q’	unsigned long long	int	8
# ‘f’	float	float	4
# ‘d’	double	float	8