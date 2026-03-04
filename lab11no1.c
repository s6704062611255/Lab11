#include <stdio.h>
#include <stdlib.h>

void addRecord(char *addName, int addAge);

int main()
{
    char name[64];
    int age;
    printf("Enter name : ");
    scanf("%s", name);
    printf("Enter age : ");
    scanf("%d", &age);
    addRecord(name, age);
    addRecord("test2", 35);
    return 0;
}
void addRecord(char *addName, int addAge)
{
    FILE *fptr;
    fptr = fopen("C:\\cs kmutnb\\CS_2.2\\Structure program\\lab11\\no1\\first.txt", "a");
    if(fptr == NULL){
        printf("Error");
        return;
    }
    fprintf(fptr, "%s %d\n", addName, addAge);
    fclose(fptr);
}
