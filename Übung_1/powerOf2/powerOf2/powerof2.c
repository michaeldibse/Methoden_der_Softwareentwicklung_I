//
//  main.c
//  powerOf2
//
//  Created by Michael Karbasch on 01.12.20.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int result;

int powerOf2(int num) {
    
    int half;
    
    half = num / 2;
    
    for(int i = 1; i < half; i++){
        
        result = pow(2, i);
        
        
        if (result == num){
            
            break;
            
        }
    
    }
    
    return result;
  
}




int main(int argc, char * argv[]) {
    
    char* b = argv[1];
    
    int num = atoi(b);
    
    powerOf2(num);
    
}
