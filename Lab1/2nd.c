
#include <stdio.h>
int main()
{
    char name[30];
    char result[10000];
    int marks, i, num;
    printf("Enter number of students: ");
    scanf("%d", &num);
    FILE *fptr;
    fptr = (fopen("student.txt", "w"));
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(i = 0; i < num; ++i)
    {
        printf("For student%d\nEnter name: ", i+1);
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fprintf(fptr,"Name: %s \nMarks: %d \n", name, marks);
    }



    fclose(fptr);

    if ((fptr = fopen("student.txt", "r")) == NULL)
        {
        printf("Error! opening file");
        exit(1);
        }
        printf("Data from the file: \n");
    while (fgets(result, 10000, fptr) != NULL)
        printf("%s", result);

    fclose(fptr);

    return 0;
}
