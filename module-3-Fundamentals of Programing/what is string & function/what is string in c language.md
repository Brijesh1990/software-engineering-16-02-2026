# what is string in  c language ?
  
  1. A string is set of character that can be stored the memory in the form of array of character.

  2. A string is a sequence of characters that is terminated by a null character ('\0').

  3. how to intialise a string in c language ?

     ```
     char str[20] = "Hello World";

     char str[] = "Hello World";

     char *str = "Hello World"; 

     ```

   4. variables specifier string in c language ?

      ```
      "%s"  
      "%c"
      "%zu"   
      ```

    5. how many types of string in c language ?

       1. String literal
         ```
         char str[20] = "Hello World";
         ````
       2. Character array
            ```
            char str[] = "Hello World";
            ```
       3. Pointer to string  

            ```
            char *str = "Hello World"; 
            
            ```


    6. types of inbuilt string function in c language ?

       1. strlen() - to find the length of the string
       2. strcpy() - to copy one string to another
       3. strcat() - to concatenate two strings
       4. strcmp() - to compare two strings
       5. strchr() - to find the first occurrence of a character in a string
       6. strstr() - to find the first occurrence of a substring in a string
