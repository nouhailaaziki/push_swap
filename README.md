# Push Swap

Push Swap is an algorithmic project that sorts a stack of integers using a limited set of operations. The challenge is to implement an optimized sorting strategy while minimizing the number of operations.

## Table of Contents
- [Overview](#overview)
- [Usage](#usage)
- [Operations](#operations)
- [Algorithm](#algorithm)
- [Bonus (Checker)](#bonus-checker)
- [Files & Structure](#files--structure)
- [License](#license)

## Overview
This project consists of two programs:

- **push_swap**: Generates the most efficient sequence of operations to sort the numbers.
- **checker** (bonus): Reads and verifies if a given sequence of operations correctly sorts the stack.

## Usage
### Sorting with push_swap
```sh
./push_swap 4 3 2 1
```
This will output a series of operations that sort the numbers.

### Checking a sequence (Bonus part)
```sh
ARG="4 3 2 1"; ./push_swap $ARG | ./checker $ARG
```
If the operations correctly sort the stack, `checker` will print `OK`. Otherwise, it will print `KO`.

## Operations
The program can only use the following operations:

- **sa**: Swap top two elements of stack A
- **sb**: Swap top two elements of stack B
- **ss**: Swap top two elements of both stacks
- **pa**: Push top element of stack B to A
- **pb**: Push top element of stack A to B
- **ra**: Rotate stack A upwards
- **rb**: Rotate stack B upwards
- **rr**: Rotate both stacks upwards
- **rra**: Reverse rotate stack A
- **rrb**: Reverse rotate stack B
- **rrr**: Reverse rotate both stacks

## Algorithm
The sorting algorithm varies based on input size:
- **3 numbers**: Simple swapping and rotation
- **4-5 numbers**: Sorting using a mix of swaps and rotations
- **Large numbers**: Optimized sorting using Chunk Sort or Radix Sort

## Bonus (Checker)
The `checker` program reads a sequence of operations and applies them to the stack to verify if it is sorted.

## Files & Structure
- **stack_ops.c** – Core stack operations (push, pop, swap, rotate, reverse rotate)
- **ops.c** – Implements allowed `push_swap` instructions
- **rotations.c** – Handles rotation operations
- **sort.c** – Implements sorting logic
- **input.c** – Handles input validation and parsing
- **utils.c** – Helper functions for stack management
- **push_swap_bonus.c** – Implements the checker for the bonus part
- **moves_bonus.c** – Bonus operations handler
- **utils_bonus.c** – Validation and output functions for bonus

## License
This project is licensed under the MIT License.

