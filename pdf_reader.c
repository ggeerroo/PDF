 #include "helpers.h"
#include <stdio.h>


int main (int argc, char *argv[])
{
    // check user input
    //input(argc, argv)

    // open file
    char *fname = "/home/gero/Documents/CS/challenges/pdf_reader/test.pdf";  
    
    FILE *fp = fopen(fname, "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening file.\n");
        return 1; 
    }

    // Declare buffer for read input
    int size = 10;
    BYTE buffer[size];

    // Read 5 characters of file and print 
    fread(buffer, sizeof(BYTE), size, fp);
    
    for (int i = 0; i < size; i++)
    {
        //fread(buffer, sizeof(BYTE), 1, fp);
        printf("%c ", buffer[i]);
    }
    printf("\n");
    
    fclose(fp);

    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               