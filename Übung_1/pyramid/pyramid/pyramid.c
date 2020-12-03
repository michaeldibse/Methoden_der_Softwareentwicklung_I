//
//  main.c
//  pyramid
//
//  Created by Michael Karbasch on 01.12.20.
//

#include <stdio.h>



void pyramid(){

    for(int i = 1; i <= 3; i++) {
        
        if (i == 1) {
            
            printf("%s\n", "  *  ");
            
        } else if (i == 2) {
            
            printf("%s\n", " *** ");
            
        } else {
            
            printf("%s\n", "*****");
            
        }
        
    }
    
}








int main() {
    
    pyramid();
  
 
}
