fn insertionSort(array: &mut [i8]) -> () {
    if array.len() <= 1 {
        return;
    }

    for i in 1..array.len() {
        let mut j = i;

        while j > 0 && array[j] > array[j - 1] {
            array.swap(j - 1, j);
            j -= 1;
        }
    }
}

fn main () {
    let mut array: [i8; 10] = [ 12, 45, 11, 0, -1, 120, 3, -7, 8, -10 ]; 
    insertionSort(&mut array);
}