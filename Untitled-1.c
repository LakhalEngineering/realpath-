#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
#include <limits.h>



int main(int argc, char **argv)
{
    if(argc < 2)
    { 
        printf("Usage : %s <path>\n",argv[0]);
       return 1;
    }

  
    char *fullpath = realpath(argv[1], NULL);
    return 0;
}