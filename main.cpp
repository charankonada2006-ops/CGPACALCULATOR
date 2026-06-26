#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numCourses;

    cout << "========== CGPA CALCULATOR ==========\n";
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    float totalCredits = 0;
    float totalGradePoints = 0;

    float grades[100];
    float credits[100];

    for (int i = 0; i < numCourses; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

while (true)
{
    cout << "Enter Grade Point (0 - 10): ";
    cin >> grades[i];

    if (grades[i] >= 0 && grades[i] <= 10)
    {
        break;
    }

    cout << "Invalid Grade Point! Please enter a value between 0 and 10.\n";
}

        cout << "Enter Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    float GPA = totalGradePoints / totalCredits;
    float CGPA = GPA;

    cout << "\n========== RESULT ==========\n\n";

    cout << left << setw(15) << "Course"
         << setw(15) << "Grade"
         << setw(15) << "Credits" << endl;

    for (int i = 0; i < numCourses; i++)
    {
        cout << left << setw(15) << i + 1
             << setw(15) << grades[i]
             << setw(15) << credits[i] << endl;
    }

    cout << fixed << setprecision(2);

    cout << "\nTotal Credits      : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << "Semester GPA       : " << GPA << endl;
    cout << "Overall CGPA       : " << CGPA << endl;


    return 0;
}
