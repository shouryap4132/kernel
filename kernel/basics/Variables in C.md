<!-- AI reviews:
- With GCC on Linux x86_64, `char letter = 'A';` is correct and the execution character set is ASCII-compatible, so the ASCII explanation applies to this environment.
- The `double` example contains more decimal digits than a typical x86_64 `double` can represent; the literal is rounded to the precision of `double`.
- `float pi = 3.14;` converts a double literal to float, so the stored value is an approximation.
-->

[[Table of Contents|Table of Contents]] 
Instantiating a variable includes two main parts
type name = value

#### Syntax

```
int number = 0;

int age; // Decleration
age = 16; // Assignment
```

#### Basic Data Types

###### Integers
```
int age = 16;
```
##### Floats
```
float pi = 3.14;
```
###### Double (Super high Precision decimal point)
```
double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
```
###### Characters
```
char letter = 'A';
```
When storing the a character you are actually storing the [[ASCII Values|ASCII]] value or EBCDIC values.

ASCII is more common as it is used in newer settings

Characters use single quotes `''` 