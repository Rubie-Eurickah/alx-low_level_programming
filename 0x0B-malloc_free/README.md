C - malloc, free

Malloc() is function reserves a block of memory of the specified number of bytes. And, it returns a pointer of void which can be casted into pointers of any form.

The free() function in C library allows you to release or deallocate the memory blocks which are previously allocated by calloc(), malloc() or realloc() functions.

0. Float like a butterfly, sting like a bee

Write a function that creates an array of chars, and initializes it with a specific char.

- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails

1. The woman who has no imagination has no wings

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup.

2. He who is not courageous enough to take risks will accomplish nothing in life

Write a function that concatenates two strings.

- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
- if NULL is passed, treat it as an empty string
- The function should return NULL on failure

3. If you even dream of beating me you'd better wake up and apologize

Write a function that returns a pointer to a 2 dimensional array of integers.

- Each element of the grid should be initialized to 0
- The function should return NULL on failure
- If width or height is 0 or negative, return NULL

4. It's not bragging if you can back it up

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

