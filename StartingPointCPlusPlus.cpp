#include <ctime>
#include <iostream>
using namespace std;

// reversing number
void reversed(int number)
{
    int reversedNumber = 0;
    while (number != 0)
    {
        reversedNumber *= 10;
        reversedNumber += number % 10;
        number /= 10;
    }
    cout << "Reversed number: " << reversedNumber << endl;
}

void evaluateNumber()
{
    // Conditionals
    int number;
    cout << "Please enter a number" << endl;
    cin >> number;
    (number % 2 == 0) ? cout << "You have entered even number " << endl : cout << "You have entered odd number" << endl;
    // reversing number
    reversed(number);
}


void factorial()
{
    // For - factorial
    int number;
    int factorial = 1;
    cout << "Please enter a number" << endl;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << number << " is " << factorial << endl;
}
void operations()
{
    float num1, num2;
    char operation;
    cout << "Calculator" << endl;
    cin >> num1 >> operation >> num2;
    switch (operation)
    {
    case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;
    case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;
    case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;
    case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;
    }
}

void variables()
{
    cout << "Helo! My name is Juan C Rodriguez" << endl;
    cout << "Please enter your annual salary" << endl;
    float annualSalary;
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    char gender;
    cout << "Please enter your gender [M,F]" << endl;
    cin >> gender;
    if (gender == 'M') {
        cout << "Your gender is male" << endl;
    }
    else
    {
        cout << "Your gender is female" << endl;
    }
    cout << "Please enter your year of birth" << endl;
    int yearOfBirth;
    cin >> yearOfBirth;
    time_t current_time = time(0);
    int age = 1970 + (current_time / 31537970) - yearOfBirth;
    cout << "Your age is " << age << '\n';
    bool isOlderThan17 = false;
    if (age >= 18) {
        isOlderThan17 = true;
    }
    string adult = isOlderThan17 ? "you are an adult" : "You aren't an adult";
    cout << adult << endl;
}

void whileExample()
{
    int counter = 100;
    while (counter <= 500)
    {
        cout << counter << endl;
        counter++;
    }
}
int main()
{
    // functions
    factorial();
    system("pause>0");
    evaluateNumber();
    // operations
    operations();
    // while
    whileExample();
    system("pause>0");
    // Variables - I/O
    variables();
    system("pause>0");
}
