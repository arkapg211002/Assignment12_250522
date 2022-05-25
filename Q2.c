/*Write a program  to Open a File, Read from it, And Close the File.*/
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[10];
    int age;
    int marks;
} RECORD;
void main()
{
    
    FILE *f;
    RECORD r;
    
    f = fopen("S.dat", "rb");
    if (f == NULL)
    {
        printf("\n File does not exist…");
        exit(1);
    }
    
    while (fread(&r, sizeof(RECORD), 1, f))
        printf("\n Name: % s, Age: % d and Marks: % d ", r.name, r.age, r.marks);
    fclose(f);
}
