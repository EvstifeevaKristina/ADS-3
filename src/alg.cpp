// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
   if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return value;
    } else {
        return value * (pown(value, n - 1));
    }
}

uint64_t fact(uint16_t n) {

    if (n <= 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

double calcItem(double x, uint16_t n) {

    return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {

    double result_ex = 1;
    for (int n = count; n > 0; n--) {
        result_ex += pown(x, n) / fact(n);
    }
    return result_ex;
}

double sinn(double x, uint16_t count) {

    if (count == 1) {
        return x;
    }
    double result_sin = 0;
    for (int n = count; n > 0; n--) {
        result_sin += (pown((-1), n - 1))*((pown(x, 2 * n - 1))
            /(fact(2 * n - 1)));
    }
    return result_sin;
}

double cosn(double x, uint16_t count) {

    double result_cos = 0;
    if (count == 1) {
        return x;
    }
    for (int n = count; n > 0; n--) {
        result_cos += (pown((-1), n - 1))*((pown(x, 2 * n - 2))
            /(fact(2 * n - 2)));
    }
    return result_cos;
}

Задание 3
int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
    int n = 0;
    bool flag;
    while (true) {
        flag = true;
        int a = 0, b = size - 1;
        while (a < b) {
            int mid = a + (b - a) / 2;
            if (arr[mid] == value) {
                for (int aa = mid; aa < size; ++aa) {
                    arr[aa] = arr[aa + 1];
                }
                size--;
                n++;
                flag = false;
                break;
            } else if (arr[mid] > value) {
                b = mid;
            } else {
                a = mid + 1;
            }
        }
        if (a == b && arr[a] == value) {
            n++;
        }
        if (flag) {
            break;
        }
    }
    return n;

  return 0; // если ничего не найдено
}
