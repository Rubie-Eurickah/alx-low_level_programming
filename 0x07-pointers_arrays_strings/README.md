C - Even more pointers, arrays and strings

This tasks are on Pointer to Pointer which means the address to where another address of a given variable is stored and Multidimesional Arrays.

0. memset
Write a function that fills memory with a constant byte.

- The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
- Returns a pointer to the memory area s
FYI: The standard library provides a similar function: memset.

1. memcpy

Write a function that copies memory area.

- The _memcpy() function copies n bytes from memory area src to memory area dest
- Returns a pointer to dest
FYI: The standard library provides a similar function: memcpy.

2. strchr

Write a function that locates a character in a string.

- Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
FYI: The standard library provides a similar function: strchr.

3. strspn

Write a function that gets the length of a prefix substring.

- Returns the number of bytes in the initial segment of s which consist only of bytes from accept
FYI: The standard library provides a similar function: strspn.

4. strpbrk

Write a function that searches a string for any of a set of bytes.

- The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
- Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
FYI: The standard library provides a similar function: strpbrk. 

5. strstr

Write a function that locates a substring.

- The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
- Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
FYI: The standard library provides a similar function: strstr.

6. Chess is mental torture

Write a function that prints the chessboard.

7. The line of life is a ragged diagonal between duty and desire

Write a function that prints the sum of the two diagonals of a square matrix of integers.

8. Double pointer, double fun

Write a function that sets the value of a pointer to a char.

9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure

Create a file that contains the password for the crackme2 executable.

- Your file should contain the exact password, no new line, no extra space
- ltrace, ldd, gdb and objdump can help
- You may need to install the openssl library to run the crakme2 program: sudo apt install libssl-dev
-Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0















