//dynamic memory allocation sanga use to huna ko lagi
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    char name[50];
    int roll;
    char hobbies[50];
};
int main () {
        int n;
        printf("n=");
        scanf("%d", &n);
        struct Student *ptr;
        FILE *fptr;
        fptr =  fopen("Student.txt", "w");
        ptr = (struct Student *)malloc(n * sizeof(struct Student));
        for (int i=0; i<n; ++i){
            printf("Enter name, roll, hobbies of %d student : ", i+1);
            
            scanf("%s %d %s", (ptr + i)->name, &(ptr + i)->roll, (ptr + i)->hobbies);
            fprintf(fptr, "%s %d %s", ptr[i].name, ptr[i].roll, ptr[i].hobbies);

        }fprintf(fptr, "\n");
        for (int i=0; i<n; ++i){
            printf("\n\nDetails of %d student : ", i+1);
            printf("\nName=%s \nRoll=%d \nHobbies=%s", (ptr + i)->name, (ptr + i)->roll, (ptr + i)->hobbies);
        }
    return 0;
} 