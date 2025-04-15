#include <iostream>
#include <cstdlib>
#include <ctime>

const int arrayRange = 100000;
const int range_min = -100;
const int range_max = 100;
const int range_size = range_max - range_min + 1;

int main() {
    int a[arrayRange];
    int frequency[range_size];
    double sum = 0.0;
    
    srand(time(0));
    
    for (int i = 0; i < arrayRange; i++) {
        a[i] = rand() % (range_size) + (range_min);
        frequency[a[i] - range_min]++;
        sum += a[i];
    }
    
    double average = sum / arrayRange;
    
    printf("Статистика по встречаемости чисел:\n");
    for (int i = 0; i < range_size; i++) {
        if (frequency[i] > 0) {
            printf("Число %d встречается %d раз. \n", i + range_min, frequency[i]);
        }
    }
    
    printf("Среднее арифметическое: %d\n", average);
    
    return 0;
    
}