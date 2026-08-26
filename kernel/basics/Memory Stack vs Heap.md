The memory stack is stored systematically:

When you make an integer, for example:
```
int x = 4;
```
The computer now stores it's binary values in 4 consecutive memory addresses.

And when you make another variable:
```
char x = 'x';
```
This gets stored in the next memory address in order avaible.

Because of this organizational methods, once making a variable the set amount of memory addresses designated to that variable is determined.

However Heap is stored differently. When storing bytes in there the computer it starts out storing it chronologically. However you can reallocate memory in the heap, so when you do that, it checks if the next consecutive memory address is open, and if it is it just moves the data there. However if it is not open it goes down through the heap until it finds a place where everything can be stored and updates the pointer with the new address.