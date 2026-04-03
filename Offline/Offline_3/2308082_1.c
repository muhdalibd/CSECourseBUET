#include <stdio.h>

char ones[][10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char teens[][10] = {"ten" ,"eleven", "twelve", "thirteen","fourteen","fifteen", "sixteen", "seventeen", "eightteen", "nineteen"};
char tens[][10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

char result[1500];

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

void strCat(char str[], char p[]) {
    int i = 0;
    int len = strLen(str);
    while (p[i] != '\0') {
        str[len+i] = p[i];
        i++;
    }
    str[len+i] = '\0';
}

void numberToWords(int num){
    if(num == 0){
        return;
    }
    if(num >= 100){
        strCat(result, ones[num / 100]);
        strCat(result, " hundred ");
        num = num % 100;
    }
    if(num >= 20){
        strCat(result, tens[num / 10]);
        strCat(result, " ");
        strCat(result, ones[num % 10]);
    }
    else if(num >= 10){
        strCat(result, teens[num - 10]);
    }
    else if(num > 0){
        strCat(result, ones[num]);
    }
}


void replaceNumbers(char str[]){
    result[0] = '\0';
    int i = 0;
    
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            int num = 0;
            while (str[i] >= '0' && str[i] <= '9'){
                num = num * 10 + (str[i] - '0');
                i++;
            }
            if (num == 0){
                strCat(result, "zero");
            } else{
                numberToWords(num);
            }
        } 
        else{
            int len = strLen(result);
            result[len] = str[i];
            result[len + 1] = '\0';
            i++;
        }
    }
}


int main(){
    char str[500];
    fgets(str, sizeof(str), stdin);
    replaceNumbers(str);
    printf("%s", result);
    return 0;
}