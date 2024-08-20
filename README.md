# C, C++, OOPs & DSA Learning with programs

#### 1. Why this Repository ?

- To strengthen the basics of **C, C++ & Object oriented paradigms** concepts.
- Follow sequential manner to get the gist of *"How to build logics"*

#### 2. Additional Links

- DSA using Object Oriented Paradigms (OOP) & concepts | [Link](https://github.com/princebansal7/DSA-Sheets-Code/tree/main/DSA-Object-Oriented-Style)
- TCS NQT Sheet (Great for basic logic building) | [Link](https://github.com/princebansal7/DSA-Sheets-Code/tree/main/TCS-NQT-Sheet)
- 180 SDE Sheet | [Link](https://github.com/princebansal7/DSA-Sheets-Code/tree/main/180-SDE-Sheet)
- 450 Sheet | [Link](https://github.com/princebansal7/DSA-Sheets-Code/tree/main/450-DSA-Sheet)
- A2Z Sheet | [Link](https://github.com/princebansal7/DSA-Sheets-Code/tree/main/A2Z-Sheet)
- CodeHelp YT | [Link](https://github.com/princebansal7/DSA-Sheets-Code/tree/main/Codehelp-Youtube)
- DSA Complete Repo | [Link](https://github.com/princebansal7/DSA-Sheets-Code)

#### 3. VsCode **Code-Runner** extension settings to automatically removes binary files like: `.exe` or `.out`

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

#### 4. **Fixes & Things worth knowing:** 

- **`<math.h>` in VsCode fixed:** if **math.h** isn't working in your VsCode, use -lm flag in execution command to link 'math' library.
    
     ```bash
        gcc test.c -lm
            or
        gcc test.c -o test -lm
     ```
- Alternatively use **`<cmath>`** header file in **C++** programs then you won't need -lm flag.
- Use `<cstring>` header file instead of `<string.h>` to use C style pre-defined string functions like: `strupr()`, `strcpy()`, `strcat()` etc in C++ programs.
- `cout` is object of `ostream` class, and `<<` is **Insertion operator**.
- `cin` is object of `istream` class, and `>>` is **Extraction operator**.