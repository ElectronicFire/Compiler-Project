#include <stdio.h>
#include <stdlib.h>

int LoadFile(char* filePath, char* output);

int main(int argCount, char** args)
{
    char* fileString;
    //if(argCount == 2) LoadFile(args[1], fileString); this method is crashing the code. AKA im stupid.

    return 0;
}

int LoadFile(char* filePath, char* output)
{
    FILE* file;
    file = fopen(filePath, "r");
    if(!file) return -1;

    while(fgets(output, 1000, filePath) != NULL)
    {
    }

    fclose(file);
    return 0;
}
