# C, C++, OOPs & DSA Learning with programs

### 1. Why Should you checkout this repository ?

- To strengthen the basics of mentioned languages & Concepts I have implemented all the programs from 0 to advanced level.
- So, open the codes in sequential manner to understand "How to build logics" when making a program.

#### 2. VsCode code runner extension setting to automatically removes binary files like: `.exe` or `.out`

  - for Windows

    ```JSON
    "code-runner.executorMap": {
      "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt -lm && $fileNameWithoutExt.exe && del $fileNameWithoutExt.exe",
      "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt -lm && $fileNameWithoutExt.exe && del $fileNameWithoutExt.exe"
    },
    ```
  - for Mac/Linux
   
    ```JSON
    "code-runner.executorMap": {
      "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt -lm && $dir$fileNameWithoutExt && rm $dir$fileNameWithoutExt",
      "cpp":"cd $dir && g++ $fileName -o $fileNameWithoutExt -lm && ./$fileNameWithoutExt && rm ./$fileNameWithoutExt",
    },
    ```
    Note: You can customize as per your own need, my personalized configuration:
    
    ```JSON
    "code-runner.executorMap": {
      "java": "cd $dir && javac $fileName && java $fileNameWithoutExt && rm $fileNameWithoutExt.class",
      "c": "cd $dir && gcc-13 $fileName -o $fileNameWithoutExt -lm && $dir$fileNameWithoutExt && rm $dir$fileNameWithoutExt",
      "cpp":"cd $dir && g++-13 -std=c++17 $fileName -o $fileNameWithoutExt -lm && ./$fileNameWithoutExt && rm ./$fileNameWithoutExt",
      "python": "python3 -u",
    },
    ```

### 3. **Fixes:** 

- **`<math.h>` in VsCode fixed:** if **math.h** isn't working in your VsCode, use -lm flag in execution command to link 'math' library.
    
     ```bash
        gcc test.c -lm
            or
        gcc test.c -o test -lm
     ```
- Alternatively use **`<cmath>`** header file in **C++** programs then you won't need -lm flag.
- Why **strupr()** and other string functions **not working** even after including **string.h** ?
  - Functions like *strupr(), strlwr(), strrev()*, which are available in *ANSI C (Turbo C/C++)* are not available in *standard C (GCC)*.
  - So if you are using *GCC complier* then they won't work & you have to make your *own string functions* else you have to use supported compiler or IDE (which includes those compilers, like: **Turbo C/C++, CodeBlocks** etc.