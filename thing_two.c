# include <stdio.h>

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%zu \n", sizeof(myInt));
    printf("%zu \n", sizeof(myFloat));
    printf("%zu \n", sizeof(myDouble));
    printf("%zu \n", sizeof(myChar));

    int normalInt = 1000;                       // standard int 
    double normalDouble = 3.14;                 // standard double
    short int small = -100;                     // smaller int
    unsigned int count = 25;                    // only positive int
    long int big = 1234567890;                  // larger int
    long long int veryBig = 9223372036854775807; // very large int
    unsigned long long int huge = 18446744073709551615U; // very large, only positive
    long double precise = 3.141592653589793238L; // extended precision

    printf("Normal int: %d\n", normalInt);
    printf("Normal double: %lf\n", normalDouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %.18Lf\n", precise);

    return 0;

}