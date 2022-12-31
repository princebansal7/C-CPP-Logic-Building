# C, C++, OOPs & DSA Learning with programs

### 1. Why Should you checkout this repository ?

- To strengthen the basics of mentioned languages & Concepts I have implemented all the programs from 0 to advanced level.
- So, open the codes in sequential manner to understand "How to build logics" when making a program.

### **Fixes:** <math.h> in VsCode fixed !

- if **math.h** isn't working in your VsCode, use -lm flag in execution command to include libm
     
        gcc test.c -lm
            or
        gcc test.c -o test -lm

- Why **strupr()** and other string functions not working even after including **string.h** ?
  - Functions like strupr, strlwr, strrev, which are available in ANSI C (Turbo C/C++) are not available in standard C (gcc).
  - So if you are using *GCC complier* then they won't work & you have to make your *own string functions* else you have to use supported compiler or IDE (which includes those compilers like: **Turbo C/C++, CodeBlocks** etc.     