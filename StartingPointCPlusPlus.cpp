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
    system("pause>0");
}
