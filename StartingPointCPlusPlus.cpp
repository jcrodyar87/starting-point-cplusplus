#include <ctime>
#include <iostream>
using namespace std;

int main()
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
    system("pause>0");
}
