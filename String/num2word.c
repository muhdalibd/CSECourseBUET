#include <stdio.h>
#include <string.h>

// Simple arrays for word mappings
char tens[10][10] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", 
                     "Sixty", "Seventy", "Eighty", "Ninety"};
char ones[20][10] = {"", "One", "Two", "Three", "Four", "Five", "Six", 
                     "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", 
                     "Thirteen", "Fourteen", "Fifteen", "Sixteen", 
                     "Seventeen", "Eighteen", "Nineteen"};

// Global result array (simpler than passing strings around)
char result[1000];

// Helper function to convert numbers less than 1000
void convertLessThanThousand(int num) {
    if (num == 0) {
        return;
    }
    
    // Handle hundreds
    if (num >= 100) {
        int hundredDigit = num / 100;
        strcat(result, ones[hundredDigit]);
        strcat(result, " Hundred");
        num = num % 100;
        if (num > 0) {
            strcat(result, " ");
        }
    }
    
    // Handle numbers 20-99
    if (num >= 20) {
        int tenDigit = num / 10;
        strcat(result, tens[tenDigit]);
        num = num % 10;
        if (num > 0) {
            strcat(result, " ");
        }
    }
    
    // Handle numbers 1-19
    if (num > 0) {
        strcat(result, ones[num]);
    }
}

// Main function to convert any number
void numberToWords(int num) {
    // Clear the result string
    result[0] = '\0';
    
    // Handle special case
    if (num == 0) {
        strcpy(result, "Zero");
        return;
    }
    
    int tempNum = num;
    
    // Handle Billions
    if (tempNum >= 1000000000) {
        int billions = tempNum / 1000000000;
        convertLessThanThousand(billions);
        strcat(result, " Billion");
        tempNum = tempNum % 1000000000;
        if (tempNum > 0) {
            strcat(result, " ");
        }
    }
    
    // Handle Millions
    if (tempNum >= 1000000) {
        int millions = tempNum / 1000000;
        convertLessThanThousand(millions);
        strcat(result, " Million");
        tempNum = tempNum % 1000000;
        if (tempNum > 0) {
            strcat(result, " ");
        }
    }
    
    // Handle Thousands
    if (tempNum >= 1000) {
        int thousands = tempNum / 1000;
        convertLessThanThousand(thousands);
        strcat(result, " Thousand");
        tempNum = tempNum % 1000;
        if (tempNum > 0) {
            strcat(result, " ");
        }
    }
    
    // Handle the remaining part (less than 1000)
    if (tempNum > 0) {
        convertLessThanThousand(tempNum);
    }
}

int main() {

    int userInput;
    scanf("%d", &userInput);
    
    numberToWords(userInput);
    printf("%d = %s\n", userInput, result);


    return 0;
}