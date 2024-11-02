#include <iostream>  // Include the iostream library for input/output operations

/* 
    This program prompts the user to enter two numbers, 
    calculates their sum, and then displays the result. 
    It demonstrates the use of comments in C++: single-line comments 
    for individual explanations and multi-line comments for an overall description.
*/

int main() {
    int num1, num2;  // Declare two integer variables to store the input numbers
    int sum;         // Declare an integer variable to store the result of the addition

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;  // Store the user input in num1

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;  // Store the user input in num2

    sum = num1 + num2;  // Calculate the sum of num1 and num2, and store it in sum

    // Display the result to the user
    std::cout << "The sum is: " << sum << std::endl;

    return 0;  // Return 0 to indicate successful program execution
}
