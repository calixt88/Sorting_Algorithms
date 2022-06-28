//
// Created by charleboisc on 6/25/2022.
//

#ifndef SORTING_ALGORITHMS_ALGORITHMS_H
#define SORTING_ALGORITHMS_ALGORITHMS_H


class algorithms {

public :
    // Declaration of the algorithm functions.
    static void swapIndex(int *a, int *b);
    static void bubbleSort(int randomArray[], int sizeOfArray);
    static void insertionSort(int randomArray[], int sizeOfArray);
    static void quickSort(int randomArray[], int sizeOfArray);
    static void mergeSort(int randomArray[], int sizeOfArray);
    static void randomSort(int randomArray[], int sizeOfArray);
};

#endif //SORTING_ALGORITHMS_ALGORITHMS_H
