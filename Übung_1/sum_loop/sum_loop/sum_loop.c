//
//  main.c
//  sum_loop
//
//  Created by Michael Karbasch on 01.12.20.
//

#include <stdio.h>

void sumUp() {
    
    int result;
    
    result = 0;
    
    for (int i = 2; i <= 1000; i += 8) {
        
        result += i;
        
    }
    
    printf("%d\n", result);
    
}



int main() {
    
    sumUp();

}
