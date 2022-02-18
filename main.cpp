#include <iostream>

void display(int randomArray[], int sizeOfArray);
void swapIndex(int *a, int *b);
void bubbleSort(int randomArray[], int sizeOfArray);
void insertionSort(int randomArray[], int sizeOfArray);
void quickSort(int randomArray[], int sizeOfArray);

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
    attempt:
    std::cout << "Please Choose a Sorting Algorithm" << std::endl;

    for(int i = 0; i < numOfAlgorithms; i++){
        std::cout << algorithms[i] << std::endl;
    }

    std::string algorithm = "";
    std::cin >> algorithm;

    if(algorithm == "B" || algorithm == "b"){
        bubbleSort(randomArray, sizeOfArray);
    }if(algorithm == "Q" || algorithm == "q"){
        quickSort(randomArray, sizeOfArray);
    }if(algorithm == "I" || algorithm == "i"){
        insertionSort(randomArray, sizeOfArray);
    }

    display(randomArray, sizeOfArray);

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

void swapIndex(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int randomArray[], int sizeOfArray){
    for(int i = 0; i < sizeOfArray; i++){
        for(int j = 0; j < sizeOfArray; j++){
            if(randomArray[j] > randomArray[j+1]){
                swapIndex(&randomArray[j], &randomArray[j+1]);
            }
        }
    }
    std::cout<<"Bubble Sorted ";
}

void insertionSort(int randomArray[], int sizeOfArray){
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

void quickSort(int randomArray[], int sizeOfArray){

}

