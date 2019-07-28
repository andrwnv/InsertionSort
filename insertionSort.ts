function insertionSort(array: number[]): number[] {
    for (let i = 0; i < array.length; i++) {
        let key = array[i];
        let j = i - 1;
        
        while( array[j] > key && j >= 0) {
            array[j + 1] = array[j];
            j -= 1;
        }

        array[j + 1] = key;
    }
    
    return array;
}

var array = [ 12, 45, 11, 0, -1, 120, 3, -7, 8, -10 ]; 
array = insertionSort(array);