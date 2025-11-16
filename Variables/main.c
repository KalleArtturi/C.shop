#include <stdio.h>

int main() {
    
    // variable = a reusable container that stores a value
    //            (data type) (name) (assignment operator) (value)
    // data types: int, float, double, char
    // int = integer (whole number without a decimal)
    // float = floating point number (number with a decimal)
    // double = double-precision floating point number (large number with a decimal)
    // char = character (single letter/number/symbol, surrounded by single quotes)

    int MyAge = 24;
    int Year = 2025;
    float gpa = 2.7;
    double pi = 3.141592653589793;
    double e = 2.718281828459045;
    char grade = 'F';

    printf("you are %d years old\n", MyAge);
    printf("the year is %d\n", Year);
    printf("my gpa is %.1f\n", gpa);
    printf("the value of pi is %.15lf\n", pi);
    printf("the value of e is %.15lf\n", e);
    printf("your grade is %c\n", grade);




    return 0;
}