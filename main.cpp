#include <iostream>
#include <chrono>

#include "algorithms.h"
/*
 * TODO: Implement merge sort
 * TODO: Implement quick sort
 * TODO: Implement random sort
 * TODO: Implement a run all algorithms and display times
 * TODO: Place comment headers for each of the files
 * TODO: Clean up code
 */

void display(int randomArray[], int sizeOfArray);

int main() {

    std::cout << "Randomize an Array of Numbers" << std::endl;
    std::cout << "Enter in a size for the Array:";
    std::string sizeOfArrayInput = " ";
    std::cin >> sizeOfArrayInput;
    int sizeOfArray = std::stoi(sizeOfArrayInput);
    int randomArray[sizeOfArray];

    for(int i = 0; i < sizeOfArray; i++){
        randomArray[i] = rand() % 100;
    }

    std::cout << "Randomized ";
    display(randomArray, sizeOfArray);

    const int numOfAlgorithms = 4;
    std::string algorithms[numOfAlgorithms] = {"Bubble Sort (B)", "Quick Sort (Q)", "insertion Sort (I)", "Run all Algorithms (A)"};

    PROMPT:
    std::cout << "Please Choose a Sorting Algorithm" << std::endl;

    for(auto & algorithm : algorithms){
        std::cout << algorithm << std::endl;
    }

    std::string algorithm;
    std::cin >> algorithm;
    std::chrono::steady_clock::time_point algorithmStart = std::chrono::steady_clock::now();

    if(algorithm == "B" || algorithm == "b" ||  algorithm == "BubbleSort") {
        algorithm = "Bubble Sort";
        algorithms::bubbleSort(randomArray, sizeOfArray);
    }else if(algorithm == "Q" || algorithm == "q" || algorithm == "QuickSort") {
        algorithm = "Quick Sort";
        algorithms::quickSort(randomArray, sizeOfArray);
    }else if(algorithm == "I" || algorithm == "i" || algorithm == "InsertionSort") {
        algorithm = "Insertion Sort";
        algorithms::insertionSort(randomArray, sizeOfArray);
    }else if(algorithm == "m" || algorithm == "M"){
        algorithm = "Merge Sort";
        algorithms::mergeSort(randomArray, sizeOfArray);
    }else if(algorithm == "R" || algorithm == "r" || algorithm == "RandomSort") {
        algorithm = "Random Sort";
        algorithms::randomSort(randomArray, sizeOfArray);
    }else {
        goto PROMPT;
    }

    std::chrono::steady_clock::time_point algorithmEnd = std::chrono::steady_clock::now();

    display(randomArray, sizeOfArray);
    std::cout << algorithm << "took " << std::chrono::duration_cast<std::chrono::seconds>
            (algorithmEnd - algorithmStart).count() << " seconds to complete";
    return 0;

}

void display(int randomArray[], int sizeOfArray){
    std::cout <<"Array: [";
    for(int i = 0; i < sizeOfArray; i++){
        std::cout << randomArray[i];
        if(i != sizeOfArray - 1){
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl << std::endl;
}
