# 100 Days of Code

My C solutions for the 100 Days of Code questions.

Days 1-50 have 2 questions each and days 51-100 have 1 question each. Every day has its own folder (`day-01`, `day-02`, ...) with one `.c` file per question.

## Run a program

```bash
gcc file.c -o file
./file
```

If a program uses `math.h` (like `day-09/quadeq.c`), add `-lm`:

```bash
gcc quadeq.c -o quadeq -lm
```

## Note

The file handling programs (days 71-80) read small `.txt` files from their own day folder, so run them from inside that folder.