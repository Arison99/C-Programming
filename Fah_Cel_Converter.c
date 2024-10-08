/* Fahrenheit - Celsius Conversion table */

#define F_LOW 0  /* Symbolic Constants */
#define F_MAX 250
#define STEP 25

main ()
{
    typedef float REAL;  /* Type definition */
    REAL  fahrenheit, celsius; /* Declaration */

    fahrenheit = F_LOW;  /*Initialization */
    printf("Fahrenheit   Celsius\n/n");
    while ( fahrenheit <= F_MAX )
    {
        celsius = ( fahrenheit - 32.0 ) / 1.8;
         printf(" %5.1f %7.2f\n", fahrenheit, celsius);
         fahrenheit = fahrenheit + STEP;
    }

}
