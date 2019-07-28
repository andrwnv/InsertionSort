def insertionSort(array)
    for index in 1..array.length do 
        key = array[index]
        j = index

        while j > 0 && array[j - 1] > key
            array[j] = array[j - 1]
            j -= 1
        end
        array[j] = key
    end

    return array
end

array = [ 12, 45, 11, 0, -1, 120, 3, -7, 8, -10 ]
array = insertionSort(array)