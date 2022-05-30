#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char name[50];
  char fileName[70];
  int i=0, id, num, math, sci, eng, tot;
  float ave;

  printf("Enter number of students: ");
  scanf("%d", &num);

  FILE *fptr;

  for(i = 0; i < num; ++i)
  {
    printf("\nFor student %d\nStudent Name: ", i+1);
    scanf("%s", name);

    printf("Student ID Number: \n");
    scanf("%d", &id);

    printf("Math Grade: \n");
    scanf("%d", &math);

    printf("Science Grade: \n");
    scanf("%d", &sci);

    printf("English Grade: \n");
    scanf("%d", &eng);

    tot = (math + sci + eng);

    ave = (tot / 3);

    sprintf(fileName, "Student%d.txt", i+1);
    fptr = (fopen(fileName, "w"));
    fprintf(fptr,"Name: %s \nStudent ID Number: %d \nMath Grade: %d \nScience Grade: %d \nEnglish Grade: %d \nTotal Grade: %d \nGrade Average: %f", name, id, math, sci, eng, tot, ave);
    }

    fclose(fptr);
    return 0;
}
