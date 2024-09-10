# GCD Calculator

This is a simple C program to calculate the Greatest Common Divisor (GCD) of two numbers using the **Euclidean Algorithm**.

## How It Works

The program takes two integers as input and finds their GCD using the following process:
1. If the second number is larger than the first, it swaps them.
2. It repeatedly finds the remainder of the division of the first number by the second.
3. The first number becomes the second, and the second becomes the remainder, repeating the process until the remainder is zero.
4. The final non-zero number is the GCD.

### Example:

For example, if you input `24` and `18`:
- First, the program ensures `24 > 18`.
- Then, it calculates `24 % 18 = 6`.
- It updates values and calculates `18 % 6 = 0`. The GCD is `6`.

## Usage

To run the program:

1. Clone the repository:
    ```bash
    git clone https://github.com/Ashank007/Euclides_Theorem.git
    ```

2. Navigate to the folder and compile the code:
    ```bash
    gcc gcd_calculator.c -o gcd_calculator
    ```

3. Run the executable:
    ```bash
    ./gcd_calculator
    ```

4. Input two numbers when prompted:
    ```
    Enter the First Number :- 24
    Enter the Second Number :- 18
    ```

5. The output will show the GCD:
    ```
    GCD of 24 and 18 is 6
    ```

## Code Explanation

```c
#include <stdio.h>

int main()
{
    int first_num, second_num, remainder = 1, new1, new2;

    printf("Enter the First Number :- ");
    scanf("%d", &first_num);
    new1 = first_num;

    printf("Enter the Second Number :- ");
    scanf("%d", &second_num);
    new2 = second_num;

    // Ensure first_num is greater than or equal to second_num
    if (second_num > first_num) {
        int temp = second_num;
        second_num = first_num;
        first_num = temp;
    }

    // Euclidean Algorithm for GCD
    while (remainder) {
        remainder = first_num % second_num;
        first_num = second_num;
        second_num = remainder;
    }

    // Output the result
    printf("GCD of %d and %d is %d", new1, new2, first_num);
    return 0;
}
