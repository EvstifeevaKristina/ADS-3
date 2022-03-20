// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int n = 0;
    bool flag;
    while (true) {
        flag = true;
        int i = 0, j = size - 1;
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (arr[mid] == value) {
                for (int ii = mid; ii < size; ++ii) {
                    arr[ii] = arr[ii + 1];
                }
                size--;
                n++;
                flag = false;
                break;
            } else if (arr[mid] > value) {
                j = mid;
            } else {
                i = mid + 1;
            }
        }
        if (i == j && arr[i] == value) {
            n++;
        }
        if (flag) {
            break;
        }
    }
    return n;

  return 0; // если ничего не найдено
}
