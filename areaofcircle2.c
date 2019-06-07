#include <stdio.h>
#include <stdlib.h>

  float areaofcircle(float r)
{
  float area = 3.14 * r * r;
  return area; 
}

  int main(int argc, char* argv[])
{
    float radiusmin;
    float radiusmax;
    char input [256];
    
  if (argc != 3)
    {
    printf("Enter the minimum and maximum radius values\n");

  while (1)
      {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f %f", &radiusmin, &radiusmax)==2) break;
      printf("This is not a valid input. Please try again.\n");  
      }
    }
  else
  {
    radiusmin = atof(argv[1]);
    radiusmax = atof(argv[2]);
  }

  for (float r = radiusmin; r <=radiusmax; r++)
  {
    float result = areaofcircle(r);
    printf("area of r =%f: %f\n",r, result); 
  }

}
