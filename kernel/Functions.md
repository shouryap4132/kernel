
Making a function in c involves 3 main parts

```

returnType NAME (Parameters){
	CODE
}
```

How to instantiate them. You have two choices before the `int main` function or after.

##### After
```

int add(int a, int b); 

// This is a prototype. Establish the parametrs you are using, the return type and the name

int main(){

}

// now after you can actually write what is in the function

int add(int a, int b){
	return a+b;
}
```
##### Before
```
// Or you can just write the whole thing from the start.
int add(int a, int b){
	return a+b;
}

// This is a prototype. Establish the parametrs you are using, the return type and the name

int main(){

}
```

If you have nothing you are returning in the function you can have `void`
Ex:
```
void helloWorld(){
	printf("Hello World");
}
```

