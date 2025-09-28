# DSA Algorithms in C

## Introduction
This repository contains implementations of fundamental **Data Structures and Algorithms (DSA)** in the C programming language.  
It is designed as a reference and practice resource for students, beginners, and anyone preparing for coding interviews.

## Table of Contents
- [Introduction](#introduction)
- [Directory Structure](#directory-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Directory Structure
```
DSA-Algorithms-main/
├── basics/
│   ├── array_search.c
│   ├── fibonacci_recursive_series.c
│   ├── fibonacci_swapping.c
│   ├── linked_list.c
│   ├── queue_using_array.c
│   ├── queue_using_linkedlist.c
│   ├── stack_using_array.c
│   └── stack_using_linkedlist.c
│
├── searching_algorithms/
│   ├── Binary_Search.c
│   ├── Linear_Search_sorted.c
│   └── Linear_Search_unsorted.c
│
├── sorting_algorithms/
│   ├── bubble_sort.c
│   ├── insertion_sort.c
│   └── merge_sort.c
│
└── README.md
```

> Note: `.exe` files are compiled outputs and can be ignored.

## Installation
To run the programs, you need a **C compiler** such as `gcc`.  
On Linux/macOS, you can install GCC using:
```bash
sudo apt-get install build-essential   # Ubuntu/Debian
brew install gcc                       # macOS (Homebrew)
```

On Windows, you can use **MinGW** or an IDE like **Code::Blocks** or **Dev-C++**.

## Usage
To compile and run a C program:
```bash
gcc filename.c -o program
./program
```

Example:
```bash
gcc basics/linked_list.c -o linked_list
./linked_list
```

## Features
- **Basics**: Arrays, Fibonacci series, Linked List, Stack, Queue
- **Searching Algorithms**: Linear Search (sorted & unsorted), Binary Search
- **Sorting Algorithms**: Bubble Sort, Insertion Sort, Merge Sort
- Clear and simple **C implementations**

## Examples
Compile and run a sorting algorithm:
```bash
gcc sorting_algorithms/merge_sort.c -o merge_sort
./merge_sort
```

Run a searching algorithm:
```bash
gcc searching_algorithms/Binary_Search.c -o binary_search
./binary_search
```

## Contributing
Contributions are welcome!  
Feel free to open issues or submit pull requests with improvements, bug fixes, or new algorithm implementations.

## License
This project is licensed under the MIT License.  
You are free to use, modify, and distribute this project with attribution.
