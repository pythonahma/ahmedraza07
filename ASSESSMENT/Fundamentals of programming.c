#include <stdio.h>
#include <ctype.h>

// Function prototypes
void reverseString();
void concat();
void stringLength();
void copyString();
void isPalindrome();
void frequency();
void Vowels_and_consonant(); 
void spaces();
int main() {
    int i;
    char str[100];
    while (1) {
        printf("\n\n **Main Menu**\n ");
        printf("1. Reverse a string\n");
        printf("2. Concatenation\n");
        printf("3. Palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of character in a string\n");
        printf("7. Find number of vowels and consonants\n");
        printf("8. Find number of blank spaces and digits\n");
        printf("9. For exit\n");
        printf("Please Enter your choice: ");
        scanf("%d", &i);
        switch (i) {
            case 1:
                reverseString();
                break;
            case 2:
                concat();
                break;
            case 3:
                isPalindrome();
                break;
            case 4:
                copyString();
                break;
            case 5:
                stringLength();
                break;
            case 6:
                frequency();
                break;
            case 7:
                Vowels_and_consonant(); //Added function call for option 7//
                break;
            case 8:
                 spaces();
                 break;
            
            case 9:
                exit(0);
            default:
                printf("Wrong choice\n");
                break;
        }
    }
    return 0;
}

void reverseString() {
    char str[100];
    printf("Enter your string here: ");
    scanf("%99s", str);

    int length = strlen(str);
    for (int i=length-1;i>=0;i--)
	{
        putchar(str[i]);
    }
    printf("\n");
}

void concat() {
    char str1[100], str2[100];

    printf("Enter your string1 here: ");
    scanf("%99s", str1);
    printf("Enter your string2 here: ");
    scanf("%99s", str2);

    strcat(str1, str2);
    printf("This is your concatenated string: %s\n", str1);
}

void stringLength() {
    char str[100];
    printf("Enter your string here: ");
    scanf("%99s", str);

    int length = strlen(str);
    printf("Length of the string: %d\n", length);
}

void copyString() {
    char str1[100], str2[100];
    printf("Enter your string1 here: ");
    scanf("%99s", str1);
    strcpy(str2, str1);
    printf("Copied string is: %s\n", str2);
}

void isPalindrome() {
    char str[100], reversedStr[100];
    printf("Enter your string here: ");
    scanf("%s", &str);

    int length = strlen(str);
    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        reversedStr[j] = str[i];
    }
    reversedStr[length] = '\0';

    if (strcasecmp(str, reversedStr) == 0) {
        printf("Given string is a palindrome\n");
    } else {
        printf("Given string is not a palindrome\n");
    }
}

void frequency() {
   char input_string[1000];
    int frequency[256] = {0}; // Assuming ASCII characters, so a total of 256 possible characters//

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    // Calculate frequency of each character in the string//
    for (int i = 0; input_string[i] != '\0'; i++) {
        frequency[(unsigned char)input_string[i]]++;
    }

    // Print the frequency of each character
    printf("Character frequencies in the string:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d\n", (char)i, frequency[i]);
        }
    }
}

void Vowels_and_consonant() {
    int vowel_count = 0, consonant_count = 0;
    char str1[100];
    
    printf("Enter a string: ");
    gets(str1);
    
    int b = strlen(str1);
    for (int i = 0; i < b; i++) {
        switch (str1[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel_count++;
                break;
            default:
                consonant_count++;
        }
    }
    printf("Number of vowels: %d\n", vowel_count);
    printf("Number of consonants: %d\n", consonant_count);
}

void spaces() 
{
    char input_string[100];
    int num_blank_spaces = 0, num_digits = 0;

    printf("Enter a string:");
    fgets(input_string, sizeof(input_string), stdin);

    // Remove the newline character from the input_string//
    int len = strlen(input_string);
    if (len > 0 && input_string[len - 1] == '\n') {
        input_string[len - 1] = '\0';
    }

    for (int i = 0; input_string[i] != '\0'; i++) {
        if (isspace(input_string[i])) {
            num_blank_spaces++;
        } else if (isdigit(input_string[i])) {
            num_digits++;
        }
    }

    printf("Number of blank spaces: %d\n", num_blank_spaces);
    printf("Number of digits: %d\n", num_digits);
}
