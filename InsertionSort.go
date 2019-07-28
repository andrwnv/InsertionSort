package main

var array = []int { 12, 45, 11, 0, -1, 120, 3, -7, 8, -10 }

func insertionSort(array []int) {
	for index := 1; index < len(array); index++ {		
		key := array[index]
		j := index - 1

		for j >= 0 && array[j] > key {
			array[j + 1] = array[j]
			j--
		}
		array[j + 1] = key
	}
}

func main() {
	insertionSort(array)
}