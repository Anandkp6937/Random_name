#ifndef RANDOM_NAME_H
#define RANDOM_NAME_H

// Generates a random filename using tmpnam() and returns a pointer to a static buffer.
// Note: The filename does NOT include an extension.
char* makeRandomName(void);

#endif // RANDOM_NAME_H
