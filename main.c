#include <stdio.h>
#include <stdlib.h>
#define LETTERS_IN_THE_ALFABET 26
#define LETTERS_IN_STRING 100

int main()
{
    char arrayLetters[LETTERS_IN_THE_ALFABET] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char enteredLetters[LETTERS_IN_STRING];
    int countTheLetters[LETTERS_IN_THE_ALFABET] = {0};
    int i;
    int j;

    printf("enter letters please\n");
    gets(enteredLetters);
    for (i = 0; i < strlen(enteredLetters); i++){
        for (j = 0; j <= LETTERS_IN_THE_ALFABET; j++){
            if (enteredLetters[i] == arrayLetters[j]){
                countTheLetters[j] = countTheLetters[j] +1;
                break;
            }
        }
    }

    for (i = 0; i < LETTERS_IN_THE_ALFABET - 1; i++){
        for(j = 0; j < LETTERS_IN_THE_ALFABET - 1 - i; j++){
            if(countTheLetters[j] < countTheLetters[j+1]){
                int temp1 = countTheLetters[j];
                countTheLetters[j] = countTheLetters[j+1];
                countTheLetters[j+1] = temp1;

                int temp = arrayLetters[j];
                arrayLetters[j] = arrayLetters[j+1];
                arrayLetters[j+1] = temp;
            }
        }
    }

    for (i =0; i < LETTERS_IN_THE_ALFABET; i++){
        if (countTheLetters[i] > 0){
            printf("%d %c\n", countTheLetters[i], arrayLetters[i]);
        }
    }
  getch(); return 0;
}
