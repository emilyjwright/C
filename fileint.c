// ***
// *** You MUST modify this file.
// ***

#include <stdio.h>
#include <stdbool.h>

#ifdef TEST_ADDFILE
bool addFile(char * filename, int * sum)
{
  *sum = 0;
  int num; //current number being scanned in the file 
  FILE *fptr; //file pointer for file being read
  fptr = fopen(filename, "r");
  int temp; //fscanf 1 or 0 

  while(!feof(fptr))
  {
   temp = fscanf(fptr, "%d", &num);
   if(temp == 1)
   {
    *sum = *sum + num;
   }
  }
  fclose(fptr);
  // You cannot assume * sum is zero. Thus, * sum needs to be set 0
  // open a file whose name is filename for reading
  // if fopen fails, return false. Do NOT fclose
  // if fopen succeeds, read integers using fscan (do not use fgetc)
  //
  // * sum stores the result of adding all numbers from the file
  // When no more numbers can be read, fclose, return true
  //
  return true;
}
#endif


#ifdef TEST_WRITESUM
bool writeSum(char * filename, int sum)
{
  FILE *fptr; //file pointer for file being written to 
  fptr = fopen(filename, "w");
    if(fptr == NULL)
  {
   return false;
  }
  fprintf(fptr, "%d\n", sum);
  fclose(fptr);
  // open a file whose name is filename for writing
  // if fopen succeeds, write sum as an integer using fprintf
  // fprintf should use one newline '\n'
  // fclose, return true
  //
  return true;
}
#endif

