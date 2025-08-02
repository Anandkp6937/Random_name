#include <stdio.h>
#include "random_name.h"  // Include the random name generator

int main() {
    // Print 5 randomly generated names
    for (int i = 0; i < 5; i++) {
        printf("Generated name: %s\n", makeRandomName());
    }

//     if you need to create  file with random name  you can use like this instead of .txt you can use ant other;
     char filenameWithExtension[100];
     
     snprintf(filenameWithExtension,sizeof(filenameWithExtension),"%s.txt",makeRandomName());
     
     // just added .txt to the random generated text with the help of snprintf();

     FILE*fptr=fopen(filenameWithExtension,"w");

     fprintf(fptr,"Hello iam batman..");

     if(fptr==NULL){
          printf("Erorr generating file");
     }
     else{
          printf("Sucessfully created file");
     }

    return 0;
}
