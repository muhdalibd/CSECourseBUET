/*
    '               Introduction to File Handling
    ### Two basic operation with the help of which we can modify our files are:
    1.  Read    => Pendrive <- copy -> Computer
    2.  Write
                SSD Card :
                Read Speed : 270 mbps
                Write Speed : 70 mbps
    But we have two important operatopns we need to learn before working with files:
    1.  Open
    2.  Close

*/


/*
    Creating a File:
        fopen(<filename or path>, <writing-mode>);

    Writing a File:
        fputs(<character-array>, <file-pointer>);

    Opening a File:
        fopen(<filename or path>, <opening-mode>);

    Reading a File:
        fgets(<character-array>, <maximum-byte-size>, <file-pointer>)
*/



#include <stdio.h>

int main(){
    // .... Creating a File: ....
    // FILE *ptr = fopen("muhdalibd.txt", "w");

    // .... Writing a File ....
    // char str[500];
    // fgets(str, 500, stdin);
    // fputs(str, ptr);
    // fclose(ptr);

    // .... Opeaning a File: ....
    // FILE *ptr = fopen("mohdalibd.txt", "r");
    // FILE *ptr = fopen("muhdalibd.txt", "r");

    // .... Reading a File: ....
    // char str[500];

    // ... Want to see only first line in the file ...
    // if(fgets(str, 22, ptr) != NULL){
    //     printf("%s", str);
    // }

    // ... Want to see all text line in the file ...
    // printf("\n");
    // while(fgets(str, 200, ptr) != NULL){
    //     printf("%s", str);
    // }

    
    return 0;
}