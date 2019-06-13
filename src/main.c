#include <stdio.h>
#include <stdlib.h> // Required for the exit function.

int main(int argc, char *argv[])
{
    if(argc < 1)
    {
        exit(1);
    }

    char c[1000];
    FILE *fptr;

    if((fptr = fopen(*argv[0], "r")) == NULL)
    {
        printf("Error opening file!");

        // program exits if file pointer returns NULL
        exit(1);
    }

    // TODO: perhapse read the file into an array of char arrays; this may not be necessary depending on the implementation of the formatting algorithms; may wish to map output to a second array, or simply manipulate the single array to avoid overallocating memory in the case of a vast row or column expansion.
    // reads text until newline
    fscanf(fptr,"%[^\n]", c);

    printf("Data from the file:\n%s", c);
    fclose(fptr);

    return 0;
}

// char linebuf[1024];

// while (fgets(linebuf, sizeof(linebuf), fptr) != NULL) {
//     // process "line"
// }
