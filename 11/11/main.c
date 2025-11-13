//
//  main.c
//  11
//
//  Created by 강채연 on 11/13/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i=10;
    char c='a';
    int *iptr;
    char *cptr;
    int *iptr2;
    
    iptr = &i;
    cptr = &c;
    iptr2 = iptr;
    
    printf("i : %p\n%p(size: %i)\n", iptr, &i, sizeof(iptr));
    printf("c : %p\n%p(size: %i)\n", cptr, &c, sizeof(cptr));
    printf("iptr2: %p, %i\n", iptr2, *iptr2);
    
    return 0;
}
