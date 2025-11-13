//
//  main.c
//  11
//
//  Created by 강채연 on 11/13/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i = 300;
    
    int *pi = &i;
    char *pc = &i;
    
    printf("%i, %i, %i\n", i, *pi, *pc);
    
    return 0;
}
