/*Write a program  to Open a File, Write in it, And Close the File.*/
#include <stdio.h>
#include <stdlib.h> /* for exit (1) */
typedef struct
{
    char name[10];
    int age;
    int marks;
} RECORD;
void main()
{
    /* f is a File Pointer or an address of a
   location in Hard Disk Drive (HDD).*/
    FILE *f;
    RECORD r;
    char ans;
    /*File opened for write operation in binary mode*/
    f = fopen("S.dat", "wb");
    if (f == NULL)
    {
        printf("\n File opening error");
        exit(1);
    }
    do
    {
        printf("\n Enter the name:");
        fflush(stdin);
        scanf("%[^\n]",r.name);
        /* Here, . (Dot) is a member accessing operator
        for the Non-pointer Structure Variable r */
        printf("\n Enter the age:");
        fflush(stdin);
        scanf("%d", &r.age);
        printf("\n Enter the marks:");
        fflush(stdin);
        scanf("%d", &r.marks);
        fwrite(&r, sizeof(RECORD), 1, f);
        /* For each successful write operation, the File
        Pointer will be advanced by the byte size of the
        data item (RECORD).*/
        printf("\n Do you want to add more records (Y/N)?");
        fflush(stdin);
        scanf("%c", &ans);
    } while (ans =='y' || ans =='Y');
    fclose(f);
}