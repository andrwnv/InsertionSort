def insertionSort(array) -> None:
    for i in range( 1, len(array) ):
        j = i - 1
        for _ in range(i):
            if array[i] > array[j]:
                array[i], array[j] = array[j], array[i]
                i -= 1
                j -= 1

if __name__ == "__main__":
    array = [ 12, 45, 11, 0, -1, 120, 3, -7, 8, -10 ]
    insertionSort(array)