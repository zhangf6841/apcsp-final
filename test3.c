#include <stdio.h>
#include <string.h>

struct Student {
  char firstname [100];
  char lastname [100];
  int classnum;
  int mark[100], i;
  float sum, avg;
  char grade;
};

void printStudent (struct Student * student)
{
  printf("Here is the information for student %s %s.\n", student->firstname, student->lastname);
  printf("Number of Enrolled Classes: %d\n", student->classnum);
}

int main()
{
  char input[100], firstname[100], lastname[100];
  char grade; 
  int numberofstudents, classnum;
  float sum, avg;
  int mark[100], i;
  printf("How many students will be stored (max 50)?\n");
  fgets(input, 100, stdin);
  sscanf(input, "%d", &numberofstudents);
  struct Student student[50];
 
  for (i = 0; i < numberofstudents; i++)
{
  printf("What is your first name?\n");
    fgets(input, 100, stdin);
    sscanf(input, "%s", firstname);
  printf("What is your last name?\n");
    fgets(input, 100, stdin);
    sscanf(input, "%s", lastname);
  printf("How many classes are you taking?\n");
    fgets(input, 100, stdin);
    sscanf(input, "%d", &classnum);
  printf("Enter your number grade for each class:\n");
  for (i=0; i<classnum; i++)
{
    printf("\nEnter grade for class %d:", i+1);
    fgets(input, 100, stdin);
    sscanf(input, "%d", &mark[i]);
    printf("you entered : %d\n", mark[i]);
}

avg=sum/classnum;

  if (avg>=90 && avg<=100)
    {
    grade = 'A';
    }
  else if (avg>=80 && avg<90)
    {
    grade = 'B';
    }
  else if (avg>=70 && avg<80)
    {
    grade = 'C';
    }
  else if (avg>=60 && avg<70)
    {
    grade = 'D';
    }
  else
    {
    grade = 'F';
    }
}

  strcpy(student[i].firstname, firstname);
  strcpy(student[i].lastname, lastname);
  student[i].classnum = classnum;
  student[i].grade = grade;

}
