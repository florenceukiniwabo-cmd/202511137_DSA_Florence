#include <iostream>
using namespace std;

// Function to calculate average
float calculateAverage(int total)
{
    return total / 3.0;
}

// Function to check pass or fail
string checkResult(float average)
{
    if (average >= 50)
        return "Passed";
    else
        return "Failed";
}

int main()
{
    string name;
    int mark1, mark2, mark3;
    char choice;

    do
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks for Subject 1: ";
        cin >> mark1;

        cout << "Enter marks for Subject 2: ";
        cin >> mark2;

        cout << "Enter marks for Subject 3: ";
        cin >> mark3;

        // Calculate total
        int total = mark1 + mark2 + mark3;

        // Calculate average using function
        float average = calculateAverage(total);

        // Display results
        cout << "\n----- Student Result -----" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
        cout << "Result: " << checkResult(average) << endl;

        // Ask if user wants to enter another student
        cout << "\nDo you want to enter another student? (y/n): ";
        cin >> choice;

        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program Ended." << endl;

    return 0;
}
	