#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int subjects, exams;
    cout << "Enter number of subjects: ";
    cin >> subjects;
    cout << "Enter number of exams per subject: ";
    cin >> exams;

    // Create dynamic 2D array
    float** grades = new float*[subjects];
    for (int i = 0; i < subjects; i++) {
        grades[i] = new float[exams];
    }

    // Input grades
    for (int i = 0; i < subjects; i++) {
        cout << "\nSubject " << i + 1 << ":\n";
        for (int j = 0; j < exams; j++) {
            cout << "Enter grade " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    // Display grade table
    cout << "\nGRADE TABLE:\n";
    cout << setw(10) << " ";
    for (int j = 0; j < exams; j++) {
        cout << "Exam " << j + 1 << setw(6);
    }
    cout << endl;

    for (int i = 0; i < subjects; i++) {
        cout << "Subject " << i + 1 << " ";
        for (int j = 0; j < exams; j++) {
            cout << setw(6) << grades[i][j];
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < subjects; i++) {
        delete[] grades[i];
    }
    delete[] grades;

    return 0;
}
