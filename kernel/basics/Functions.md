[[Table of Contents|Back]] | [[Variables in C]] | [[Pointers]]

## Table of Contents
- Function Syntax
- Function Instantiation
  - After (Prototype)
  - Before (Full Definition)
- Void Functions
- Arrays

---

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

### Arrays
When passing through arrays you have two options. Note: Arrays as [[Pointers|pointers]] require understanding [[Memory Address|memory addresses]].
1.  ```
   
   void printArray(int arr[], int size){
	   for(int i = 0; i < size; i++){
		   printf("%d ", arr[i]);
	   }
   }
   
   ```
OR
1. ```
   void printArray(int* arr, int size){
	   for(int i = 0; i < size; i ++){
		   printf("%d ", arr[i]);
	   }
   }
   ```