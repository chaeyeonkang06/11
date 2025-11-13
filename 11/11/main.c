//
//  main.c
//  11
//
//  Created by 강채연 on 11/13/25.
//

#include <stdio.h>

char *proverb="All that gliters is not gold.";

void setPointer(char **q)
{
    *q = proverb;
}

int main(void)
{
    char *p = "zzz";
    
    setPointer(&p);
    printf("%s\n", p);
    
    return 0;
}
