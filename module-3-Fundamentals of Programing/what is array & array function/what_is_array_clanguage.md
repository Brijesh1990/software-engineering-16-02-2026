# what is array in c language  ?

1. array is stored multiple value in single variable.
2. array is collection of data of same type of elements.
3. array is used to store multiple values in a single variables of elements of same type.
4. array alocated values in formate of index number.
5. array is used to stored data on zero based index number.

**how to declare array in c language ?**

syntax : data_type array_name [size of array];

example : int a[5];

**how to initialize array in c language ?**

syntax : data_type array_name [size of array] = {value1, value2, value3, value4, value5};

example : int a[5] = {10, 20, 30, 40, 50};

**how to access array in c language ?**

syntax : array_name[index number];

example : int a[5] = {10, 20, 30, 40, 50};
printf("%d", a[0]); // output: 10
printf("%d", a[1]); // output: 20
printf("%d", a[2]); // output: 30
printf("%d", a[3]); // output: 40
printf("%d", a[4]); // output: 50


**print values with loop of array**

example : int a[5] = {10, 20, 30, 40, 50};
for(int i = 0; i < 5; i++) {
printf("%d ", a[i]);
}
// output: 10 20 30 40 50 


**array stored name and print name with loop**

example : char name[5][20] = {"john", "doe", "smith", "jane", "doe"};

for(int i = 0; i < 5; i++) {
printf("%s ", name[i]);
}
// output: john doe smith jane doe                           


example: 

#include <stdio.h>

int main() {
int a[5] = {10, 20, 30, 40, 50};

for(int i = 0; i < 5; i++) {
printf("%d ", a[i]);
}
// output: 10 20 30 40 50 

return 0;
}


examples : 

#include<stdio.h>
int main()
{
//intialised array 
char name[6][20]={"sanket", "prakash", "belim", "manan", "ravi"};
char i;
for(i=0;i<6;i++)
{
printf("%s\n",name[i]);	
}
return 0;

}


# types of array in c language 

1. one dimensional array
2. two dimensional array
3. multi dimensional array


** one dimensional array in c language**

one dimensional array is a linear array that stores elements in a single row or column. it is the simplest form of array and is used to store a list of values of the same type.

example :
#include <stdio.h>
int main() {
int a[5] = {10, 20, 30, 40, 50};
for(int i = 0; i < 5; i++) {
printf("%d ", a[i]);
}
return 0;
}


** two dimensional array in c language**

two dimensional array is an array of arrays. it is used to store data in a tabular form, where each element is accessed using two indices: one for the row and one for the column.

example :
#include <stdio.h>
int main() {
int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
for(int i = 0; i < 2; i++) {    
for(int j = 0; j < 3; j++) {
printf("%d ", a[i][j]);
}
printf("\n");
}
return 0;
}


**print name with two dimensional array**

example :
#include <stdio.h>
int main() {
char name[2][3][20] = {
{"john", "doe", "smith"},
{"jane", "doe", "smith"}
};
for(int i = 0; i < 2; i++) {
for(int j = 0; j < 3; j++) {
printf("%s ", name[i][j]);
}
printf("\n");
}
return 0;
}


** multi dimensional array in c language**

multi dimensional array is an array of arrays of arrays. it is used to store data in a multi-dimensional form, where each element is accessed using multiple indices.

example :
#include <stdio.h>
int main() {
int a[2][3][4] = {
{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
{{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}
};

for(int i = 0; i < 2; i++) {
for(int j = 0; j < 3; j++) {
for(int k = 0; k < 4; k++) {
printf("%d ", a[i][j][k]);
}
printf("\n");
}
}
return 0;
}


**list of functions with array in c language**

example :

1. sizeof() function: it is used to determine the size of an array in bytes.
2. strlen() function: it is used to determine the length of a string stored in an array of characters.
3. strcpy() function: it is used to copy a string from one array of characters to another array of characters.
4. strcat() function: it is used to concatenate two strings stored in arrays of characters.
5. strcmp() function: it is used to compare two strings stored in arrays of characters.
6. memset() function: it is used to set all elements of an array to a specific value.
7. memcpy() function: it is used to copy a block of memory from one location to another location.
8. memmove() function: it is used to move a block of memory from one location to another location, even if the source and destination overlap.
9. qsort() function: it is used to sort an array of elements in ascending or descending order.
10. bsearch() function: it is used to perform a binary search on a sorted array of elements to find a specific value.   
