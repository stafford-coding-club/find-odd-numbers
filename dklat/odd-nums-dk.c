#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

   if (argc < 2) {
      printf("Usage: %s <low bound> <up bound>\n", argv[0]);
      return 0;
   }

   int low = atoi(argv[1]);
   int up  = atoi(argv[2]);

   if (low > up) {
      fprintf(stderr, "Lower bound bigger than upper bound");
      return 1;
   }

   int lcount = 0;

   // for loop solution
   for (int i = low; i < up; i++) {
      if (i % 2 == 1) lcount += 1;
   }

   printf("For loop result: %d\n",lcount);

   // math solution
   const int res = ceil((up - low) / 2.0);

   printf("Math result: %d\n", res);

   return 0;
}