#define _XOPEN_SOURCE

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    if(argc < 2)
    {
        printf("Simple program to apply system crypt() to command line argument (c) 2023 Collin Rose\n\n");
        printf("%s STRING_TO_CRYPT\n",argv[0]);
        exit(0);
    }

    printf("%s\n",crypt(argv[1],"ab"));
    exit(0);
}
