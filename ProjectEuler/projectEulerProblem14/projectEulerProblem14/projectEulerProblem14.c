//
//  main.c
//  projectEulerProblem14
//
//  Created by Michael Karbasch on 03.12.20.
//

#include <stdio.h>

// function to determine isEven

int isEven(long num) {
    
    if (num % 2 == 0) {
        
        return 1;
        
    } else {
        
        return 0;
    }
    
}

// global variable

int counter;

int collatz(int x) {
    
    counter = 1;
    
    long number;
    
    number = x;
    
    while (number > 1) {
        
        if (isEven(number) == 1) {
            
            number = number / 2;
            
        } else {
            
            number = 3 * number + 1 ;
            
        }
        //printf("%lu\n", number);
        counter += 1;
        
    
    }
    //printf("%d\n", counter);
    return counter;
    
}

int  longestChainCounter;

void longestChain(int end) {
    
    int i;
    
    int number = 0;
    
    longestChainCounter = 1;
    
    for (i = 1; i < end; i++){
        
        int chain = collatz(i);
                
        if (chain > longestChainCounter) {
   
            longestChainCounter = chain;
            
            number = i;
            
        }
  
    }
    
    printf("%d\n", i);
    printf("%d\n", longestChainCounter);
    printf("%d\n", number);

}


int main() {
    
    longestChain(1000000);
    
   
}

