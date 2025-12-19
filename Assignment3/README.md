1.The difference between a normal variable and a pointer is ;
a normal variable is a named memory location that stores an actual value while a pointer is a special variable that  stores the memory location of a certain variable and not the value itself , a variable accesses the value of the variable directly while a pointer accesses the value of a variable indirectly using the memory address of variable containing the value , in a normal variable ,values are read and modified directly while in pointers, values are read and modified indirectly using memory addresses.
2.A variable declaration tells the compiler to create a named memory location while a variable definition assigns the variable a certain value whereas a pointer declaration tells the compiler to allocate some memory for the pointer while pointer definition assigns the location an address and not a value.

 int x = 10; // variable declaration and definiton
 int *p=&x; //pointer declaration and definiton

The operator & (address of operator) is used assign a memory address.
The * (dereferencing operator) is used  to access the value at a stored address.

3.Dereferencing a pointer means accessing the value stored at the memory address a pointer holds

int x=6; //variable  declaration and definition
int *p=&x;  //pointer accesses the value stored at x
*p=8;  //value of x is modified
 
4. Pointers are preferred where large data is involved, copying this data when a function is called is inefficient as it wastes memory.
Pointers are preferred when modifying variables inside functions ,unless pointers are used , values of variables used in functions do not get changed or updated.
Practical examples include; passing arrays to functions and dynamic memory allocation using malloc

5. Limitations and Risks of Using Pointers
•	Pointers can be uninitialized, meaning they may contain random memory addresses. Dereferencing such pointers can cause program crashes or unpredictable behaviour.
•	Null pointer dereferencing occurs when a pointer that does not point to any valid memory is accessed, leading to immediate program termination.
•	Dangling pointers arise when a pointer continues to reference memory that has already been freed or gone out of scope, which can result in memory corruption.
•	Improper use of dynamic memory allocation can lead to memory leaks, where allocated memory is not released and system resources are waste

6. In call by value ,a copy of the variable is passed to the function, Changes made inside the function do not affect the original variable and it’s safer and prevents unintended modification of data.

In call by reference, the address of the variable is passed to the function using pointers, the function can modify the original variable through dereferencing and it’s more efficient for large data and necessary when updates are required.

7.a) 1. Where the original data must remain unchanged
     2.When performing mathematical calculations 
b)  1. Where a function needs to modify the original variables.
     2.Where swapping values  is required.
     3. Passing large data structures such as arrays efficiently.

