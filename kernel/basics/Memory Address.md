<!-- AI reviews:
- `char` occupies 1 byte, not necessarily one separately addressable memory location in the way this wording implies.
- `int` is commonly 4 bytes, but its size is implementation-dependent in C.
- The byte-order example assumes a particular endianness. The final byte is not always stored at the highest address.
- A CPU does not necessarily retrieve a C variable by simply finding one address; compiler and hardware details are involved.
-->

One character takes 1 [[Memory Address|memory address]]
A integer takes 4 [[Memory Address|memory address]]


So lets say this is our Memory Stack

```
int x = 4; // now &x is going to hold the address of the FIRST byte. 
```

So for example `&x = 0x1000` and it would belong to the next 3 memory addresses. A bit is just `0 | 1` and a byte is 8 bits. The integer is then converted to binary and set to the last memory address `0x1003` 

| Memory Address | Data / Value |
| :------------- | :----------- |
| **0x1000**     | 00000000     |
| **0x1001**     | 00000000     |
| **0x1002**     | 00000000     |
| **0x1003**     | 00000100     |
| **0x1004**     |              |
| **0x1005**     |              |
| **0x1006**     |              |
| **0x1007**     |              |
| **0x1008**     |              |
| **0x1009**     |              |
| **0x100A**     |              |
| **0x100B**     |              |

So Now when you call `x` the cpu find the address and returns the 4 consecutive addresses in decimal converting from binary.