#include "Ex8.h"

int main() {
	setlocale(LC_ALL, "rus");
	int n = 0;
	Student newStud;
	cout << "Number of students in the group: \n";
	cin >> n;
	vector <Student> students(n);
	for (int i = 0; i < n; i++) {
		cin >> students[i];
	}
	cout << "Student with the highest average score: ";
	float maxball = 0;
	int maxindex = 0;
	float sumball = 0;
	for (int i = 0; i < n; i++) {
		if (maxball< students[i].get_average_ball()) {
			maxball = students[i].get_average_ball();
			maxindex = i;
		}
		sumball += students[i].get_average_ball();
	}
	cout << students[maxindex] << '\n';
	cout << "The average score of the students of the group: ";
	cout << sumball/n << '\n';
	return 0;
}