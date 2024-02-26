#include <iostream>
#include <vector>
using namespace std;
double calculateCGPA(const vector<double>& grades, const
vector<double>& creditHours) {
 double totalGradePoints = 0;
 double totalCreditHours = 0;
 for (size_t i = 0; i < grades.size(); ++i) {
 totalGradePoints += grades[i] * creditHours[i];
 totalCreditHours += creditHours[i];
 }
 double cgpa = totalGradePoints / totalCreditHours;
 return cgpa;
}
int main() {
 int numSubjects;
 cout << "Enter the number of subjects: ";
 cin >> numSubjects;
 vector<double> grades(numSubjects);
 vector<double> creditHours(numSubjects);
 for (int i = 0; i < numSubjects; ++i) {
 cout << "Enter grade obtained in subject " << i + 1 << ": ";
 cin >> grades[i];
 cout << "Enter credit hours for subject " << i + 1 << ": ";
 cin >> creditHours[i];
 }
 double cgpa = calculateCGPA(grades, creditHours);
 cout << "CGPA: " << cgpa << endl;
 return 0;
}
