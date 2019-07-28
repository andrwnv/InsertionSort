<$php
    $arr = array( 12, 45, 11, 0, -1, 120, 3, -7, 8, -10 );

    function insertionSort($array) {
        for ($index = 0; $index < count($array); $index++) {
            $key = $array[$index];
            $j = $index - 1;

            while ($j >= 0 && $array[$j] > $key) {
                $array[$j + 1] = $array[$j];
                $j--;
            }

            $array[$j + 1] = $key;
        }

        return $array;
    }

    $array = insertionSort($array);

?>
