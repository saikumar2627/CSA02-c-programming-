1.
  #include <stdio.h>

int main() {
    int num;

    printf("Input number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is positive", num);
    } else if (num < 0) {
        printf("%d is negative", num);
    } else {
        printf("%d is zero", num);
    }

    return 0;
}

2.
  #include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
        scanf("%d", &number);
    if (number % 5 == 0 && number % 11 == 0) {
            printf("Number is divisible by 5 and 11\n");
                }
                    else {
                            printf("Number is not divisible by 5 and 11\n");
                                }
    return 0;
    }






3.
  #include <stdio.h>

int main() {
    char ch;
    printf("Input character: ");
        scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            printf("'%c' is alphabet.\n", ch);
                }
                    else {
                            printf("'%c' is not alphabet.\n", ch);
                                }
    return 0;
    }





4.
  #include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
        int vowels = 0;
            printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
    for(int i=0; i<strlen(str); i++)
        {
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                        {
                                    vowels++;
                                            }
                                                }
    printf("The number of vowels in the string is: %d", vowels);
        return 0;
        }











5.
  #include <stdio.h>

int main() {
   char ch;
   printf("Enter a character: ");
      scanf("%c", &ch);
   if (ch >= 'A' && ch <= 'Z')
         printf("%c is an uppercase alphabet\n", ch);
            else if (ch >= 'a' && ch <= 'z')
                  printf("%c is a lowercase alphabet\n", ch);
                     else
                           printf("%c is not an alphabet\n", ch);
   return 0;
   }








6.
  #include <stdio.h>

int main() {
    int amount, notes, denomination;
        printf("Enter the amount: ");
            scanf("%d", &amount);
    int denominations[] = {500, 100, 50, 20, 10, 5, 2, 1};
        int num_notes[sizeof(denominations)/sizeof(denominations[0])];
    for(int i=0; i<sizeof(denominations)/sizeof(denominations[0]); i++){
            denomination = denominations[i];
                    num_notes[i] = amount / denomination;
                            amount = amount % denomination;
                                }
    printf("Total number of notes:\n");
        for(int i=0; i<sizeof(denominations)/sizeof(denominations[0]); i++){
                denomination = denominations[i];
                        printf("%d: %d\n", denomination, num_notes[i]);
                            }
    return 0;
    }









7.
  #include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter an integer: ");
        scanf("%d", &num);
    while (num != 0) {
            num /= 10;
                    ++count;
    }
    printf("Number of digits: %d", count);
    return 0;
    }




8.
  #include <stdio.h>

int main() {
    int num, sum = 0, digit;
        printf("Input any number: ");
            scanf("%d", &num);
    for (; num > 0; num /= 10) {
            digit = num % 10;
                    sum += digit;
                        }
    printf("Sum of digits: %d\n", sum);
    return 0;
    }





9.
  #include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;
        printf("Input number: ");
            scanf("%d", &num);
                for (; num != 0; num /= 10) {
                        remainder = num % 10;
                                reversed_num = reversed_num * 10 + remainder;
                                    }
                                        printf("Reverse of %d = %d\n", num, reversed_num);
                                            return 0;
                                            }










10.
  #include <stdio.h>

int main() {
    int decimal_num, binary_num = 0, i = 1, remainder;
    printf("Enter a decimal number: ");
        scanf("%d", &decimal_num);
    while (decimal_num > 0) {
            remainder = decimal_num % 2;
