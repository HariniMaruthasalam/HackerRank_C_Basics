#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char a[1000], freq[256] = {0};
  int i, n, j, count = 0;
  scanf("%[^\n]s", a);    //input from user
  n = strlen(a);         // finding string length
  char ch = '0';
  for (i = 0; i < 10; i++)
    {
          for (j = 0; j < n; j++)
          {
            if (a[j] == ch)
            {
              count++;
            }
          }
      printf("%d ", count);
      count = 0;
      ch++;
    }
 
    return 0;
}
