#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float average;
    char grade;

    cout << "Enter marks of 5 subjects:\n";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5.0;

    if(average >= 90)
        grade = 'A';
    else if(average >= 75)
        grade = 'B';
    else if(average >= 60)
        grade = 'C';
    else if(average >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\nTotal Marks: " << total;
    cout << "\nAverage Marks: " << average;
    cout << "\nGrade: " << grade;

    return 0;
}
