#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gpacalc.h"

int main()
{
  char ch, answer;
  int i, grade[5]; 
  float credit[5], score [5], gpa = 0.0, totalcredit = 0.0;

 printf("Enter your letter grade, the score, and the number of credits you receive for each class.");
 printf("\n");

   for (i = 0; i < 4; i++)
   {   
      printf("Class %d (Letter Grade | Score (max 5) | Credit (max 5)): ", i + 1);
      ch = getchar();
      grade[i] = ch;
      scanf("%f", &score[i]);
      scanf("%f", &credit[i]);
      getchar();
   }


FILE* outFile;

  // open a file
  outFile = fopen("outputfile", "w");
  if (outFile == NULL) {
    printf("error - failed to open file for writing\n");
    return 1;
  }

  fprintf(outFile, "\nClass | Grade | Score | Credit\n");

   for (i = 0; i < 4; i++)
   {
      fprintf(outFile, "  %d   |   %c   |  %.1f  |   %.0f \n", i + 1, grade[i], score[i], credit[i]);
   }

   for (i = 0; i < 4; i++)
   {
      switch (grade[i])
      {
        case 'A':
            gpa = gpa + (score[i] * credit[i]);
            totalcredit = totalcredit + credit[i];
            break;
        
        case 'B':
            gpa = gpa + (score[i] * credit[i]);
            totalcredit = totalcredit + credit[i];
            break;

        case 'C':
            gpa = gpa + (score[i] * credit[i]);
            totalcredit = totalcredit + credit[i];
            break;

        case 'D':
            gpa = gpa + (score[i] * credit[i]);
            totalcredit = totalcredit + credit[i];
            break;

        case 'F':
            gpa = gpa + (score[i] * credit[i]);
            totalcredit = totalcredit + credit[i];
            break;
      }
   }  
 fprintf(outFile, "Total Score: %f\tTotal Credit: %f\n", gpa, totalcredit);
 gpa = calculate(gpa, totalcredit);
 fprintf(outFile, "Total GPA: %.2f\n", gpa); 

 fprintf(outFile, "\n");
   {
      printf("Do you want to continue [Y/N]?\n");
      scanf("%c", &answer);
        if (answer == 'Y' || answer == 'y')
            return main();
        else if (answer == 'N' || answer == 'n')
            return 0;
   }
  fclose(outFile);
}





