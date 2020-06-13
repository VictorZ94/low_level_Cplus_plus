## Session to start working code programming in c++

### 1. positive is better than negative

	- to do a program that print number positive and negativo

Example:

```
[victorz@ManjaroKDE low_level_Cplus_plus]$ g++ -Wall -Werror -Wextra -pedantic positive_or_negative.cpp -o positive_or_negative
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./positive_or_negative 
-960869704 is Negative 
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./positive_or_negative 
-190288933 is Negative 
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./positive_or_negative 
-190288933 is Negative 
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./positive_or_negative 
577849612 is Positive
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./positive_or_negative 
-804846233 is Negative 
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./positive_or_negative 
1044686884 is Positive
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./positive_or_negative 
740180170 is Positive
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./positive_or_negative 
439940947 is Positive
[victorz@ManjaroKDE low_level_Cplus_plus]$ 

```

### write a program that print numbers from 00 .. 99

	- using only putchar

Example:

```
[victorz@ManjaroKDE low_level_Cplus_plus]$ g++ -Wall -Werror -Wextra print_comb.cpp -o print_comb
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./print_comb | cat -e
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99$
[victorz@ManjaroKDE low_level_Cplus_plus]$

```

### Write a program tha print a number and its last digit.

	- if the last digit of n is greater than 5: the string and is greater than 5
	- if the last digit of n is 0: the string and is 0
	- if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0

```
[victorz@ManjaroKDE low_level_Cplus_plus]$ g++ -Wall -pedantic -Werror -Wextra last_digit.cpp -o last_digit
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of -1024401477 is -7 and is less than 6 and not 0
Last digit of -1024401477 is -7 and is less than 6 not 0
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of -566648959 is -9 and is less than 6 and not 0
Last digit of -566648959 is -9 and is less than 6 not 0
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of 225238069 is 9 and is greater than 5
Last digit of 225238069 is 9 and is greater than 5
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of -683520782 is -2 and is less than 6 and not 0
Last digit of -683520782 is -2 and is less than 6 not 0
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of 856307077 is 7 and is greater than 5
Last digit of 856307077 is 7 and is greater than 5
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of 553850035 is 5 and is less than 6 and not 0
Last digit of 553850035 is 5 and is less than 6 not 0
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of -830411311 is -1 and is less than 6 and not 0
Last digit of -830411311 is -1 and is less than 6 not 0
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of -370255429 is -9 and is less than 6 and not 0
Last digit of -370255429 is -9 and is less than 6 not 0
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of -665491020 is 0 is Zero
Last digit of -665491020 is 0 is Zero
[victorz@ManjaroKDE low_level_Cplus_plus]$ ./last_digit 
Last digit of -204146364 is -4 and is less than 6 and not 0
Last digit of -204146364 is -4 and is less than 6 not 0


```
