# Homework 1 — Quiz Grade Analyzer

## Overview

This program reads an unknown number of quiz scores from standard input
and reports the number of scores entered, their sum, minimum, maximum,
average, and a letter grade for the class average. See the full
assignment handout on Canvas for the complete problem statement,
required behavior, example interaction, constraints, and grading
rubric — this README only summarizes the setup and submission steps.

## Files in This Repository

| File | Purpose |
|---|---|
| `main.cpp` | Your program. Fill in the file header, then complete each TODO inside `main()`. |
| `README.md` | This file. |
| `.gitignore` | Excludes compiled binaries and IDE files from version control. |

## Compiling and Running

```
g++ -std=c++11 main.cpp -o main
./main            # macOS / Linux
.\main.exe        # Windows
```

Enter one integer score per line. When you are done entering scores,
signal end-of-file on its own line:

- macOS / Linux: `Ctrl+D`
- Windows: `Ctrl+Z` then `Enter`

## Submission Checklist

- [ ] Filled in the file header at the top of `main.cpp` (name, student ID, section).
- [ ] Program compiles with no errors or warnings using `g++ -std=c++11 main.cpp -o main`.
- [ ] Tested the program with at least: zero scores, one score, several scores, and inputs that produce each letter grade (A–F).
- [ ] Code is commented and consistently formatted.
- [ ] Committed and pushed all changes to GitHub (not just once, right before the deadline).
- [ ] Submitted through Gradescope by selecting this repository and the correct branch.
- [ ] Submitted the Part A Concept Check answers as a PDF on Canvas.

## Academic Integrity

Write this code independently. Do not copy code from another student,
share your submission files with classmates, or use an AI tool to
generate, complete, modify, or correct any part of this program. See
the course syllabus, Section B, for the full policy.
