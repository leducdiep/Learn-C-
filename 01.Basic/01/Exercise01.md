1. Basic main() Function
- Exercise: Write a simple C++ program that outputs "Hello, World!" to the console.
    * Define the main() function as the entry point.
    * Use std::cout to print the message.
    * Experiment with returning different values (e.g., 0, 1) from main() and see what happens when you run the program.
2. Using Headers
- Exercise: Split your program into two files to understand the purpose of headers.
    * Create a file called greetings.h and define a function prototype for sayHello().
    * Create another file called greetings.cpp and implement sayHello() in it.
    * In the main.cpp file, include greetings.h and call sayHello() from main().
    * This will help you understand how headers work to declare functions, separating declaration from implementation.
3. Using Namespaces
- Exercise: Write a program that demonstrates the use of namespaces.
    * Create a namespace called greet and define a function inside it called sayGoodMorning().
    * Use the sayGoodMorning() function in your main() function.
    * Try calling sayGoodMorning() directly without specifying the namespace. Then, add using namespace greet; to allow calling it directly.
4. Practicing Comments
- Exercise: Add different types of comments in your code.
    * Write a program that calculates the sum of two numbers.
    * Use single-line (//) comments to explain what each line of code does.
    * Use multi-line comments (/* ... */) to describe the overall functionality of the program.
5. Combining main(), Headers, Namespaces, and Comments
- Exercise: Create a program that demonstrates the use of all these elements together.
    * Create a header file (math_operations.h) with the prototype for a function add().
    * Define add() in a separate source file (math_operations.cpp), within a namespace math.
    * In main.cpp, include the header and use the add() function to add two numbers.
    * Use comments to explain the code.
