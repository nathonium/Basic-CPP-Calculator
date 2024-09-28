// Basic calculator in C++.

// Includes iostream.
#include <iostream>

// Defines the std namespace so we won't have to write std::cout/std::cin.
using namespace std;

// Defines the main function.
int main()
{
    // Defines some basic variables for operation, first number, second number, and answer.
    int op;
    float num1;
    float num2;
    float answer;

    // Displays a title and list of operations.
    cout << "Calculator\n\n";

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n\n";

    // Takes user input for the desired operation.
    cin >> op;

    /*YandereDev's worst enemy. Checks which number the user inputted for operation and runs desired
    case.*/
    switch (op)
    {
        // Addition.
        case 1:
        // Takes input for first number.
        cout << "First Number: ";
        cin >> num1;

        // Takes input for second number.
        cout << "Second Number: ";
        cin >> num2;

        // Calculates result.
        answer = num1 + num2;

        // Displays result.
        cout << answer << "\n\n";

        // Loops back to the main function.
        main();

        // Subtraction. Same comments as case 1.
        case 2:
        cout << "First Number: ";
        cin >> num1;

        cout << "Second Number: ";
        cin >> num2;

        answer = num1 - num2;

        cout << answer << "\n\n";

        main();

        // Multiplication. Same comments as cases 1 and 2
        case 3:
        cout << "First Number: ";
        cin >> num1;

        cout << "Second Number: ";
        cin >> num2;

        answer = num1 * num2;

        cout << answer << "\n\n";

        main();

        // Division. Same comments as cases 1, 2, and 3.
        case 4:
        cout << "First Number: ";
        cin >> num1;

        cout << "Second Number: ";
        cin >> num2;

        answer = num1 / num2;

        cout << answer << "\n\n";

        main();

        // Exit.
        case 5:
        // Exits the program.
        exit(0);
    }
}