# what is programming language ? 

1. set of instructions 
2. set of logic in form of instructions 
3. set of syntax & logic 
4. c language is first name is 'B' language 
5. c language is a high level based language 

Note : compiler will confused if you can not assign any variable data types

```
a=10 //wrong way

int a=10, b=20, sum;  //right way

```


6. c langauge used as proggraming language

```
1. syntax
2. data structures
3. operator 
4. variables 
5. control or looping
6. functions
7. array & string
8. file handeling 

``` 


# what is c language

1. c langauge is very old language
2. c language is compiler based language 
3. c language compiler check proggrames step by step and convert highe level language into low level language.

**working of compiler in c language**      

**hello brijesh**

**Note : high level to binary code**   


![alt text](image.png)



# how to start c language 

1. start it header function 
2. start its syntax 
3. run c language proggrames used IDE or online compiler or DEV C

1. visual studio code  
2. online editor or compiler 
3. DEV C 

4. c language file extension .c 
5. c language is case-senstive language 



# simple proggrammes syntax 

**syntax of c language**

```
#include <stdio.h>
#include <conio.h>
Note : this is an header function library of c language
int main()
{
<!-- body of main function -->
printf("hello brijesh");
return 0; //terminate a proggrames 
}
```


# what is operator in c ?
1. operator operand some actions or operations there we used operator in c language
2. operator operate additions | substraction | comparisions | multiplications
3. types of operator 

1. airtmatic operator 

**examples of airthmatic operator**
```
examples : + , - ,* , / , % etc
``` 
2. assingment operator 

**examples of assingment operator**
```
examples : =, ==, != etc

```


3. comparision operator or relational operator

**examples of comparision operator**
```
examples : >, <, >=, <=, ===,  etc
```  


4. logical  operator 

**examples of logical operator**
```
examples : and && , or || , not !  etc
``` 


5. sorthand or betwise operator 

**examples of betwise operator**
```
examples : +=, -=, *= , %= , /=, >> ,<< etc
ex: a=10;
b=20;
a+=b; // a=a+b  
``` 	  
6. increment / decrement  operator 

**examples of increment/decrement**
```
examples : ++ , -- etc
post increment : a++
post decrement : a--
``` 

7. misslanious  operator 

```
sizeof :
* :
?: conditional operator or ternary operator
& : return an address of users
``` 		  

# what is variable in c language  

  1. variable is a name of memory location
  2. variable is a container which store data information
  3. variable is a name of memory location which store data information
  4. variable is a name of memory location which store data information and we can change it value any time in proggrames

**syntax of variable declaration in c language**

```
data_type variable_name = value; //declaration and initialization of variable
data_type variable_name; //declaration of variable
variable_name = value; //initialization of variable

or

int a=10; //declaration and initialization of variable
int a; //declaration of variable
a=10; //initialization of variable

```

# what is data types in c language

1. data types is a type of data which we can store in variable
2. data types is a type of data which we can store in variable and we can perform operations on it.
3. data types is a type of data which we can store in variable and we can perform operations on it and we can change its value any time in proggrames i.e called data types of c language. 

**types of data types in c language**

1. int : it is a data type which store integer value in variable
   ```
   examples : 10, 20, 30, -10, -20, -30 etc
   
   ```

2. float : it is a data type which store decimal value in variable
   ```
   examples : 10.5, 20.5, 30.5, -10.5, -20.5, -30.5 etc

   ```
3. char : it is a data type which store single character value in variable
   ```
   examples : 'a', 'b', 'c', 'A', 'B', 'C', '1', '2', '3' etc

   ``` 

4. double : it is a data type which store double decimal value in variable

   ```
   examples : 10.5612021, 20.555121, 30.55641, -10.565121, -20.5612121, -30.15455 etc
   ```

5. void : it is a data type which store nothing in variable

   ```
    examples : void function_name() //function which return nothing
   ```

6. enum : it is a data type which store a set of named integer constants in variable

  ```
   examples : enum week {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
  ```

7. struct : it is a data type which store a set of variables of different data types in variable
   ```
   examples : struct student {
   char name[50];
   int age;
   float marks;
   };
   ```
8. union : it is a data type which store a set of variables of different data types in variable but only one variable can store value at a time

9. pointer : it is a data type which store the address of variable in variable

# rules for variable naming in c language
1. variable name must start with a letter or underscore
2. variable name can contain letters, digits and underscores
3. variable name cannot be a reserved keyword in c language
4. variable name cannot contain spaces
5. variable name cannot start with a digit
6. variable name should be meaningful and descriptive
7. variable name should be in camelCase or snake_case or case-sensitive
8. variable name should not be too long or too short

```
examples of variable naming in c language
int age; //correct
int _age; //correct
int age1; //correct
int 1age; //wrong
int age$; //wrong
int int; //wrong
int Age; //correct
int age_of_student; //correct
int ageOfStudent; //correct
int a; //correct but not meaningful
int age; //correct but not meaningful
```

# formatter of variables 

  1. int "%d" or placeholder
  2. float "%f" "%.2f" "%.1f" or placeholder
  3. char "%c" 
  4. string "%s" 
  5. double "%lf" 


# multiline assign variables 
# find sizeof any variables data types (sizeof)

# float a=10.65



# what is formate specifier in c language 

1. formate specifier is a placeholder which we used to print the value of variable in c language
2. formate specifier is a placeholder which we used to print the value of variable in
   c language and we can also use it to take input from user in c language

**types of formate specifier in c language**

1. int : "%d" or placeholder
2. float : "%f" "%.2f" "%.1f" or placeholder
3. char : "%c"
4. string : "%s"
5. double : "%lf"


# what is #include "stdbool.h" in c language
1. #include "stdbool.h" is a header file which we used to use boolean data type in c language
2. #include "stdbool.h" is a header file which we used to use boolean data type in c language and we can also use it to take input from user in c language

**examples of boolean data type in c language**
```
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool is_raining = true;
    bool is_sunny = false;

    printf("Is it raining? %d\n", is_raining);
    printf("Is it sunny? %d\n", is_sunny);

    return 0;
}

```

# how to take input from user in c language

1. scanf() function is used to take input from user in c language
2. scanf() function is used to read the value of variable from user
3. scanf() function is used with formate specifier to read the value of variable from user

**syntax of scanf() function**

scanf("%formate_specifier", &variable_name);

**note : & is used to take the address of variable in scanf() function**

**examples of scanf() function**
```
int age;
printf("Enter your age: ");
scanf("%d", &age);
printf("Your age is: %d", age);

float salary;
printf("Enter your salary: ");
scanf("%f", &salary);
printf("Your salary is: %.2f", salary);

char name[50];
printf("Enter your name: ");
scanf("%s", name);
printf("Your name is: %s", name);


```

# c language conditional statements 

1. conditional statements is checked true and false condition in c language
2. conditions statements is checked true there if is esecuted and if false there else is executed in c language


 **types of conditional statements in c language**
1. if statement
2. if-else statement
3. nested if statement
4. switch statement
5. ternary operator or conditional operator (?"true":"false")
6. if else if statement

# what is if statement in c language

1. if statement is a conditional statement which is used to check the condition in c language
2. if statement is a conditional statement which is used to check the condition and execute the block of code if the condition is true in c language

**syntax of if statement in c language**
```
if (condition) 
{
    // block of code to be executed if the condition is true
}

or


#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter a values :");
	scanf("%d",&a);
	printf("Enter b values :");
	scanf("%d",&b);
   //check conditions 
   if(a>b)
   {
     printf("a is greater than b");	
   }	
   return 0;
}

```

2. if-else statement : if is true then if block is executed and if false then else block is executed

**syntax of if-else statement in c language**
```
if (condition) 
{
    // block of code to be executed if the condition is true
}
else
{
    // block of code to be executed if the condition is false
}
or

#include <stdio.h>
int main()
{
int a,b;
printf("Enter a values :");
scanf("%d",&a);
printf("Enter b values :");
scanf("%d",&b);
//check conditions 
if(a>b)
{
printf("a is greater than b");	
}	
else
{
printf("a is less than b");	

}
return 0;
}

```
