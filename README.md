# Random_name

The makeRandomName() function generates a pseudo-random string by leveraging C’s built-in tmpnam() function.
It creates a temporary filename like /tmp/fileXYZ123, then extracts only the random suffix (XYZ123) by locating the "file" substring and performing pointer arithmetic to skip past it.

L_tmpnam is a macro that defines the minimum buffer size required to hold the temp name (usually defined in /usr/include/stdio.h).

strstr() is used to find the "file" prefix in the generated path.

strlen("file") is added to move the pointer just past "file" (this is called pointer arithmetic).

The result is copied into a static buffer and returned.

If "file" isn’t found (which is rare), the full tmpnam() string is returned as a fallback.

This method is useful for generating human-readable, unique suffixes for filenames, such as output_XYZ123.txt.

