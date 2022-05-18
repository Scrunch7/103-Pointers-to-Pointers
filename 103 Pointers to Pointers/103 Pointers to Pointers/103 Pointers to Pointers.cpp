#include "Header.h"
#include <iostream>


void print(int **value) {
    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << *(valPtr[i] + j) << std::endl;
        }
    }

}

int main(){
    
    print(valPtr);
    

}
