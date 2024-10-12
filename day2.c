/*1.Write a C program to check the values are equal or not

Input Format

Accept two integer as input

Constraints

NIL

Output Format

EQUAL/NOT EQUAL

Sample Input 0

10 10
Sample Output 0

EQUAL
Sample Input 1

-109   83839
Sample Output 1

NOT EQUAL 

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Checking if the values are equal
    if (a == b) {
        printf("EQUAL\n");
    } else {
        printf("NOT EQUAL\n");
    }

    return 0;
}

/*2.Write a C program to check the number is odd or even using conditional construct

Input Format

Accept an integer as an input

Constraints

NIL

Output Format

ODD/EVEN

Sample Input 0

3
Sample Output 0

ODD
Sample Input 1

8
Sample Output 1

EVEN

sollution: */
#include <stdio.h>

int main() {
    int num;

    // Accepting an integer as input
    scanf("%d", &num);

    // Checking if the number is even or odd
    if (num % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}

/*3.Write a C program to determine the sign of the input using conditional constructs.

Input Format

Accept an integer as an input

Constraints

NIL

Output Format

Positive/Negative/Zero

Sample Input 0

100
Sample Output 0

Positive
Sample Input 1

-45
Sample Output 1

Negative
Sample Input 2

0
Sample Output 2

Zero

sollution: */
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Checking the sign of the number
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}

/*4.Write a C program to check the number is divisible by 3 or not using conditional construct.

Input Format

Accept an integer as an input

Constraints

NIL

Output Format

DIVISIBLE/NOT DIVISIBLE

Sample Input 0

363
Sample Output 0

The number is divisible by 3
Sample Input 1

31
Sample Output 1

The number is not divisible by 3 and gives a remainder 1

sollution:*/
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    // Checking if the number is divisible by 3
    if (num % 3 == 0) {
        printf("The number is divisible by 3\n");
    } else {
        printf("The number is not divisible by 3 and gives a remainder %d\n", num % 3);
    }

    return 0;
}

/*5.Write a C program to check the number is either divisible by 3 or divisible by 5 and display the corresponding message

Input Format

Accept an integer as an input

Constraints

NIL

Output Format

Hi/Hello/HiHello

Sample Input 0

1500
Sample Output 0

HiHello
Sample Input 1

93
Sample Output 1

Hi
Sample Input 2

25
Sample Output 2

Hello

sollution:*/
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Checking divisibility
    if (num % 3 == 0 && num % 5 == 0) {
        printf("HiHello\n");
    } else if (num % 3 == 0) {
        printf("Hi\n");
    } else if (num % 5 == 0) {
        printf("Hello\n");
    } else {
        // If the number is neither divisible by 3 nor by 5, do nothing or can add a message
        printf("Not divisible by 3 or 5\n");
    }

    return 0;
}

/*6.Write a C program to check whether the given year is leap year or not using conditional construct

Input Format

Accept an integer as an input

Constraints

NIL

Output Format

Leap/Not leap

Sample Input 0

1900
Sample Output 0

Not a Leap year
Sample Input 1

2012
Sample Output 1

Leap year

sollution: */
#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    // Checking for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a Leap year\n");
    }

    return 0;
}

/*7.Write a program to check whether the time is valid or not using conditional construct.

Input Format

hh:mm:ss

Constraints

NIL

Output Format

VALID/NOT VALID

Sample Input 0

16:70:45
Sample Output 0

Not Valid
Sample Input 1

11:45:45
Sample Output 1

Valid

sollution: */
#include <stdio.h>

int main() {
    int hh, mm, ss;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    
    // Checking for valid time
    if (hh >= 0 && hh < 24 && mm >= 0 && mm < 60 && ss >= 0 && ss < 60) {
        printf("Valid\n");
    } else {
        printf("Not Valid\n");
    }

    return 0;
}

/*8.Write a program to find given a specific date ,check whether the date is valid or not. Year will be in range 1900 to 9999

Input Format

dd/mm/yy

Constraints

NIL

Output Format

VALID/INVALID

Sample Input 0

08/16/2000
Sample Output 0

Invalid
Sample Input 1

17/10/1994
Sample Output 1

Valid

sollution: */
#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int dd, mm, yyyy;
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    // Checking for valid year range
    if (yyyy < 1900 || yyyy > 9999) {
        printf("Invalid\n");
        return 0;
    }

    // Checking for valid month
    if (mm < 1 || mm > 12) {
        printf("Invalid\n");
        return 0;
    }

    // Days in each month
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust for leap year
    if (isLeapYear(yyyy)) {
        daysInMonth[2] = 29;
    }

    // Checking for valid day
    if (dd < 1 || dd > daysInMonth[mm]) {
        printf("Invalid\n");
    } else {
        printf("Valid\n");
    }

    return 0;
}

/*9.Write a program to print corresponding day based on given input

Input Format

Accept an integer as an input

Constraints

NIL

Output Format

Print corresponding day or Invalid

Sample Input 0

0
Sample Output 0

Sunday

sollution: */
#include <stdio.h>

int main() {
    int day;
  scanf("%d", &day);
    // Printing the corresponding day or "Invalid"
    switch (day) {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }

    return 0;
}

/*10.Write a program to print the respective month name based on given input

Input Format

Accept an integer as an input

Constraints

NIL

Output Format

Print the respective month or Invalid

Sample Input 0

3
Sample Output 0

March

sollution: */
#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);
    // Printing the corresponding month or "Invalid"
    switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }

    return 0;
}
