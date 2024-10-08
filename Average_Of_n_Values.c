/* Program to calculate the average of a set of N numbers  */

#define N 10  /* Symbolic Constant */

main ()
{
      int  count;      /* Declaration of variables */
      float  sum, average, number;

      /* Initialization of variables */
      sum = 0;
      count = 0;

      printf("Enter Ten numbers to find their average\n");

      /* loop */
      while ( count < N )
       {
            scanf("%f", &number);
            sum = sum + number;
            count = count + 1;
       }

        average = sum/N ;
        printf("N = %d  sum = %f", N, sum);
        printf(" Average = %f", average);

}

