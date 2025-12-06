#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void min_arr(int *tablica, int len) {
    int min = tablica[1];
    for(int i = 0; i<=len-1; i++){
        if(tablica[i] < min){
            min = tablica[i];
        }
    }

    printf("\nMin %d \n", min);
}

void max_arr(int *tablica, int len) {
    int max = 0;
    for(int i = 0; i<=len-1; i++){
        if(tablica[i] > max){
            max = tablica[i];
        }
    }

    printf("\nMax %d \n", max);
}

void avg_arr(int *tablica, int len) {
    int avg_pre = 0;
    for(int i = 0; i<=len-1; i++){
        avg_pre += tablica[i];
    }

    int avg = avg_pre/len;

    printf("\nAvg %d \n", avg);
}

void sum_arr(int *tablica, int len) {
    int sum = 0;
    for(int i = 0; i<=len-1; i++){
        sum += tablica[i];
    }

    printf("\nSum %d \n", sum);
}

void BubbleSortPointers(int *tab, int len) {
    int i, j, t;


    for (i = 0; i < len; i++) {

        for (j = i + 1; j < len; j++) {

            if (*(tab + j) < *(tab + i)) {

                t = *(tab + i);
                *(tab + i) = *(tab + j);
                *(tab + j) = t;
            }
        }
    }

    for (i = 0; i < len; i++)
        printf("%d ", *(tab + i));
}

void MergeSortPointers(int *tab, int len) {

}

int main()
{
    // podanie dlugosci tabloicy jedno wym. przez uzytkownika
    // do tablicy randomowe liczby
    // z tablicy wybieramy max, min, srednia, suma

    srand(time(NULL));

    int len;

    printf("Podaj wielkosc tablicy: \n");
    scanf("%d", &len);

    int myNumbers[len];

    //printf("%d", len);

    for(int i = 0; i <= len-1; i++) {
        myNumbers[i] = rand();
    }


    printf("Tablica: \n");
    for(int i = 0; i <= len-1; i++) {
        printf("%d, ", myNumbers[i]);
    }

    printf("\n");

    min_arr(myNumbers, len);

    max_arr(myNumbers, len);

    avg_arr(myNumbers, len);

    sum_arr(myNumbers, len);


    printf("\n---------Sortowania----------\n");
    //implementacja timer
    float time;
    clock_t timer;

    timer = clock();
    BubbleSortPointers(&myNumbers, len);
    timer = clock() - timer;

    printf("\n");
    printf("\n");
    printf("Czas dla bubble sort: %f s\n", (double)timer / CLOCKS_PER_SEC);

    return 0;
}
