// Copyright 2021 NNTU-CS
void bubleSort(int* arr, int size) {
    int temp = 0;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int cbinsearch(int *arr, int size, int value) {
 bubleSort(arr, size);
    int colvo = 0, left = 0;
    int right = size - 1;
        while (left <= right) {
        int center = (left + right) / 2;
        if (arr[center] == value) {
            colvo++;
            int i = center - 1;
            while (i >= 0 && arr[i] == value) {
                colvo++;
                i--;
            }
            i = center + 1;
            while (i < size && arr[i] == value) {
                colvo++;
                i++;
            }
            return colvo;
        } else if (arr[center] < value)
            left = center + 1;
        else {
            right = center - 1;
        }
    }
  return 0;
}
