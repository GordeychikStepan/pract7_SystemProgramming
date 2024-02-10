// Practice7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

// Рекурсивная функция для вычисления НОД
int nod(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return nod(b, a % b);
    }
}

// Рекурсивная функция для вычисления НОД для последовательности чисел
int nod_sequence(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    else {
        return nod(nod_sequence(arr, n - 1), arr[n - 1]);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[] = { 48, 36, 24, 60, 72, 90, 108, 144, 180, 216 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = nod_sequence(arr, n);
    std::cout << "НОД для последовательности чисел: " << result << std::endl;
    return 0;
}

