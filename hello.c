#include <stdio.h>
#include <stdlib.h>

//main() method
//program will look for main() method and execute instructions within the method
int main()
{
    //character type decalred with char keyword
    //define a variable with single character
    char middleInitial = 'R';

    //a group of char's (string) declared with []
    char characterName[] = "John"; 

    //define an int variable
    int characterAge = 35;

    //define a decimal number
    double gpa = 3.8;

    //print a string, %s as placeholder for string types
    printf("There once was a man named %s\n", characterName);

    //print a string, %d as placeholder for int types
    printf("he was %d years old.\n", characterAge);

    //changing the characterAge variable to 35
    //not required to reindentify variable type
    characterAge = 35;

    printf("He really liked the name %s\n", characterName);
    printf("but he did not like being %d.\n", characterAge);
    printf("\n");

    //printing a float type with %f
    printf("My GPA: %f\n", gpa);

    //printing a single char variable with %c
    printf("Middle Initial: %c\n", middleInitial);

    //declaring a constant variable
    //constants cannot be altered
    //the type and value must both be decalred
    const char birthMonth[] = "July";
    const int birthDay = 20;


    /*
    Arithmetic Operations: +, -, *, /, %, ++, --

    Assignment Operators: =, +=, -=, /=, *=, ^=

    Comparison Operators: >, <, ==, !=, <=, >=

    Logical Operators:
    && (returns true if both are true)
    || (OR returns true if one statement is true)
    ! (reverse the result)
    
    */


    return 0;
}