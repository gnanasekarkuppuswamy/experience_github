/*
 * Simple experiment source code
 * main.c no argument
 */

#include <stdio.h>

int strlen(char *str)
{
	unsigned int count;
	for (count = 0; str[count] != '\0'; count++);
	return count;
}

int main()
{
    unsigned int status = 0;
    unsigned char repo[5] = "test";
    
    printf("repo %s status %d\n", repo, status);

    status = 5;
    if (status == 5)
    {
	    printf("string length %d\n", strlen(repo));
    }
    return 0;
}
