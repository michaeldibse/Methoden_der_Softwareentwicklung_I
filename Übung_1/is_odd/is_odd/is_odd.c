//
//  main.c
//  is_odd
//
//  Created by Michael Karbasch on 01.12.20.
//

#include <stdio.h>
#include <stdlib.h>

char* is_odd(int num) {
    
    char* boolean;
    
    boolean = "true";
    
    if (num % 2 == 0) {
         
        boolean = "false";
        
    } else {
        
        boolean = "true";
        
    }
    printf("%s\n", boolean);
    return boolean;
    
}



int main(int argc, char*argv[]) {
    
    char* b = argv[1];
    
    int num = atoi(b);
    
    is_odd(num);
    
  
}
