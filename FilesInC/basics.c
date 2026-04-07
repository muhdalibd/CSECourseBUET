/*
    File Handling
    In C, you can create, open, read, and write to files by declaring
    a pointer of type FILE, and use the fopen() function:
        FILE *fptr;
        fptr = fopen(filename, mode);
    FILE is basically a data type, and we need to create a pointer variable
    to work with it (fptr). For now, this line is not important.
    It's just something you need when working with files.
    To actually open a file, use the fopen() function, which takes two parameters:
    1. filename.txt
    2. mode => writing "w", reading "r", append "a"
*/

/*
    Create a File
    To create a file, you can use the w mode inside the fopen() function.
    The w mode is used to write to a file. However, if the file does not exist,
        it will create one for you:

    Closing the file
    Did you notice the fclose() function in our example above?
    This will close the file when we are done with it.
    It is considered as good practice, because it makes sure that:
    1. Changes are saved properly
    2. Other programs can use the file (if you want)
    3. Clean up unnecessary memory space
*/

#include <stdio.h>

// int main(){
//     // File pointer to store the value returned by fopen
//     FILE *fptr;
//     // Create a file
//     fptr = fopen("filename.txt", "w");
//     // Close the file
//     fclose(fptr);
//     return 0;
// }


/*
    Write To a File
    The w mode means that the file is opened for writing.
    To insert content to it, you can use the fprintf() function.
*/

// int main(){
//     FILE *fptr;
//     fptr = fopen("filename.txt", "w");
//     // Write some text to the file
//     fprintf(fptr, "Hello, I'm Mohammad Ali Hasan.");
//     fclose(fptr);
//     return 0;
// }


/*
    Append Content To a File
    If you want to add content to a file without deleting the old content,
    you can use the append "a" mode.
    Note: Just like with the w mode; if the file does not exist,
    the a mode will create a new file with the "appended" content.
*/

// int main(){
//     FILE *fptr;
//     // Open a file in append mode
//     fptr = fopen("filename.txt", "a");
//     // Append some text to the file
//     fprintf(fptr, "\nI want to become a Data Scientist.");
//     fclose(fptr);
//     return 0;
// }

// int main(){
//     FILE *fptr;
//     fptr = fopen("mohdalibd.txt", "w");
//     fprintf(fptr, "Hey, I'm Mohammad Ali Hasan.");
//     fclose(fptr);
//     fptr = fopen("mohdalibd.txt", "a");
//     fprintf(fptr, "\nI love C Programming.");
//     fclose(fptr);
//     return 0;
// }



/*
    Read a File:
        To read from a file, you can use the r mode:
    Note: The fgets function only reads the first line of the file.
    If you remember, there were two lines of text in filename.txt.
    To read every line of the file, you can use a while loop:
*/

// #include <string.h>
// int main(){
//     FILE *fptr;
//     // Open a file in read mode
//     fptr = fopen("mohdalibd.txt", "r");
//     // Declare the character array for the data to be read from file
//     char str[500];
//     // If the file does not exist
//     if(fptr == NULL){
//         printf("Failed to open.\n");
//     } else{
//         // Read the content and print it
//         printf("File is now open.\n");
//         while(fgets(str, 500, fptr) != NULL){
//             printf("%s", str);
//         }
//     }
//     fclose(fptr);
//     return 0;
// }