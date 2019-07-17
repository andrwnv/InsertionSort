public class Main {

    public static void main(String[] args) {
        int [] array = { 12, 45, 11, 0, -1, 120, 3, -7, 8, -10 };

        insertionSort(array);
        for (int i = 0; i < array.length; i++){
            System.out.println(array[i]);
        }
    }

    public static void insertionSort(int[] array){
        for(int i = 1; i < array.length; i++){
            int key = array[i];
            int j = i - 1;

            while(j >= 0 && array[j] > key){
                array[j + 1] = array[j];

                j--;
            }
            array[j + 1] = key;
        }
    }
}
