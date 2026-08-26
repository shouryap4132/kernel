<!-- AI reviews:
- On GCC Linux x86_64, a byte is 8 bits, `char` occupies 1 byte, and `int` normally occupies 4 bytes. The C standard itself does not require every target to use these sizes.
- x86_64 is little-endian, so the value 4 would normally be stored as `04 00 00 00` at addresses `0x1000` through `0x1003`; the table currently shows big-endian order.
- The CPU explanation is simplified: the compiler may keep a variable in a register or optimize it away instead of loading it directly from memory.
-->

One character takes 1 [[Memory Address|memory address]]
A integer takes 4 [[Memory Address|memory address]]


So lets say this is our Memory Stack

```
int x = 4; // now &x is going to hold the address of the FIRST byte. 
```

So for example `&x = 0x1000` and it would belong to the next 3 memory addresses. A bit is just `0 | 1` and a byte is 8 bits. The integer is then converted to binary and set to the first memory address `0x1001` This is fully based on because it is x86_64.

| Memory Address | Data / Value |
| :------------- | :----------- |
| **0x1000**     | 00000100     |
| **0x1001**     | 00000000     |
| **0x1002**     | 00000000     |
| **0x1003**     | 00000000     |
| **0x1004**     |              |
| **0x1005**     |              |
| **0x1006**     |              |
| **0x1007**     |              |
| **0x1008**     |              |
| **0x1009**     |              |
| **0x100A**     |              |
| **0x100B**     |              |

So Now when you call `x` the cpu find the address and returns the 4 consecutive addresses in decimal converting from binary.