#include <stdio.h>

int main() {

    //Format specifier = Special tokens that beging with a % symbol,
    //                   followed buy a charracter that specifies
    //                   the data type and optional modifiers 
    //                   like width, precision, and flags.
    //                   they control how data is displayed or interpeted.
    int age = 21;
    float price = 12.99;
    double pi = 3.141592;
    char currency = '$';
    char name[] = "doctor who";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);
    printf("\n");

    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = 1000;
    int num4 = 100000;

    // chirstmas tree the wrong way

    printf("%4d\n", num1);
    printf("%4d", num2);
    printf("%d\n", num1);
    printf("%5d", num3);
    printf("%d\n", num1);
    printf("%6d", num4);
    printf("%d\n", num1);
    printf("%4d\n", num1);

    printf("\n");

    //precision

    float price1 = 3.5353;
    float price2 = 14.5935;
    float price3 = -100.3235;

    printf("%+.1f\n", price1);
    printf("%+.1f\n", price2);
    printf("%+.2f\n", price3);


    return 0;
}