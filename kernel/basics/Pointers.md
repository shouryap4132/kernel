<!-- AI reviews:
- The explanation is mostly correct, but a pointer can also be NULL or point to a function, not only to a variable.
-->

Every [[Variables in C|variable]] has a [[Memory Address|memory address]], and a variable that holds the memory address of itself or another variable is a [[Pointers|pointer]].

```
char *str; // A pointer to a character.
int *ptr; // A pointer to an integer
double *p; // A pointer to a double
```

Now lets say you instantiate a variable, and want to set a pointer that that variable's memory address.

```
int num = 20;
// &num holds the memory address of num

int *ptr = &num; // so now ptr holds the address to number.

// now printing 'ptr' will actually print the address, however when you want the actual variable stored at that address you have to reference to it as *ptr

printf("%d\n", *ptr); // this will print out 20
printf("%p\n", ptr); // this will print the address that points to 20
// ---------- Output -----------
20
```

You can change the actual value of the variable through a pointer as well.
```

*ptr = 10;

printf("%d\n", *ptr); // and now it will print out 10.
```

