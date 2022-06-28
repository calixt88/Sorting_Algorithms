//
// Created by charleboisc on 6/25/2022.
//

#include <iostream>
#include "algorithms.h"

void algorithms::bubbleSort(int randomArray[], int sizeOfArray){
    for(int i = 0; i < sizeOfArray; i++){
        for(int j = 0; j < sizeOfArray; j++){
            if(randomArray[j] > randomArray[j+1]){
                swapIndex(&randomArray[j], &randomArray[j+1]);
            }
        }
    }
    std::cout<<"Bubble Sorted ";
}

void algorithms::insertionSort(int randomArray[], int sizeOfArray){
    for(int i = 0; i < sizeOfArray; i++){
        int key = randomArray[i];
        int j = i - 1;

        while(key < randomArray[j] && j >= 0){
            randomArray[j + 1] = randomArray[j];
            --j;
        }
        randomArray[j + 1] = key;
    }
    std::cout<<"Insertion Sorted ";
}

void algorithms::quickSort(int *randomArray, int sizeOfArray) {

}

void algorithms::mergeSort(int *randomArray, int sizeOfArray) {


}

void algorithms::randomSort(int *randomArray, int sizeOfArray) {

}

void algorithms::swapIndex(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}