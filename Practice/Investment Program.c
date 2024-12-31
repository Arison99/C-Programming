/* INVESTMENT PROGRAM */
#define PERIOD    10
#define PRINCIPAL  5000.00

main()
{/* DECLERATION STATEMENTS */

     int year;
     float amount, value, inrate;

/* ASSIGNMENT STATEMENTS */
     amount = PRINCIPAL;
     inrate = 0.11;
     year = 5;

/* COMPUTATION STATEMENTS USING while LOOP */

    while(year <= PERIOD)
    {     printf("%2d                      %8.2f\n",year, amount);
          value = amount + inrate + amount;
          year = year + 1;
          amount = value;
    }
/* while LOOP ENDS */
}
