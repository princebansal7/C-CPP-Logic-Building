# C, C++, OOPs & DSA Learning with programs

### 1. Why this Repository ?

- To strengthen the basics of **C/C++** language concepts. I have implemented all the programs from 0 to advanced level.
- So, go through the files in sequential manner to understand *"How to build logics"*.

#### 2. VsCode **Code-Runner** extension settings to automatically removes binary files like: `.exe` or `.out`

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
    Note: You can customize these settings as per your own need, my personalized configuration is:
    
    ```JSON
    "code-runner.executorMap": {
      "java": "cd $dir && javac $fileName && java $fileNameWithoutExt && rm $fileNameWithoutExt.class",
      "c": "cd $dir && gcc-13 $fileName -o $fileNameWithoutExt -lm && $dir$fileNameWithoutExt && rm $dir$fileNameWithoutExt",
      "cpp":"cd $dir && g++-13 -std=c++17 $fileName -o $fileNameWithoutExt -lm && ./$fileNameWithoutExt && rm ./$fileNameWithoutExt",
      "python": "python3 -u",
    },
    ```

### 3. **Fixes & Things worth knowing:** 

- **`<math.h>` in VsCode fixed:** if **math.h** isn't working in your VsCode, use -lm flag in execution command to link 'math' library.
    
     ```bash
        gcc test.c -lm
            or
        gcc test.c -o test -lm
     ```
- Alternatively use **`<cmath>`** header file in **C++** programs then you won't need -lm flag.
- Use `<cstring>` header file instead of `string.h` to use C style pre-defined string functions like: `strupr()`, `strcpy()`, `strcat()` etc in C++ programs.
- `cout` is object of `ostream` class, and `<<` is **Insertion operator**.
- `cin` is object of `istream` class, and `>>` is **Extraction operator**.