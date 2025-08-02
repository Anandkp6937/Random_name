#include <stdio.h>
#include <string.h>
#include "random_name.h"

// Static buffer to store the generated random name
static char randomName[100];

// Generates a random name by extracting the random part from tmpnam()

// Example tmpnam output: /tmp/fileXyz123 → returns: Xyz123
char* makeRandomName(void) {
    char fullpath[L_tmpnam]; //L_tmpnam is macro used to define the length of random string. You can see in cd usr/include/stdio.h
    tmpnam(fullpath);  // Generate temporary file path

    // Find the "file" prefix and extract the suffix (e.g., "Xyz123")
    char* strEx = strstr(fullpath, "file");

    if (strEx) {
        strEx =strEx+strlen("file"); // Move pointer past "file" ( pointer arthmetic )
        snprintf(randomName, sizeof(randomName), "%s", strEx);
    } else {
        // If "file" not found, use the whole path as fallback
        snprintf(randomName, sizeof(randomName), "%s", fullpath);
    }

    return randomName;
}
