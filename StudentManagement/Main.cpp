#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
const string FILE_PATH = "Student_manager.txt";

struct Student
{
	int ID;
	string Name;
	float Score;
};

vector<Student> students;
bool wantExit = false;

void question();
void showStudents(vector<Student> students);
void getInforStudent();
void continueInsertStudent();
bool checkIdExit(int id, vector<Student> students);
bool insertStudent(Student student, vector<Student> *students);
bool saveStudentsToFile(vector<Student> students);

int main() {
	while (!wantExit)
	{
		question();
	}
	cout << "Thank for use ... " << endl;
	system("pause");
	return 0;
}

void question() {
	system("cls");
	cout << "------------ MENU -----------" << endl << endl;

	cout << "1. Input" << endl;
	cout << "2. Display" << endl;
	cout << "3. Save to file" << endl;
	cout << "4. Load from file" << endl;
	cout << "0. Exit" << endl;

	cout << "----------------------------------" << endl << endl;
	cout << "Choose: ";

	int select;
	cin >> select;

	switch (select)
	{
	case 1:
		getInforStudent();
		break;
	case 2:
		showStudents(students);
		break;
	case 3:
		if (saveStudentsToFile(students)) cout << "Save file success!" << endl;
		else cout << "Save file Failed, Try it!" << endl;
		system("pause");
		break;
	case 0:
		wantExit = true;
		break;
	default:
		break;
	}
}

// Get id, name, score of student
void getInforStudent() {
	system("cls");
	cout << "----- INSERT STUDENT -----" << endl;
	cout << "BIGGEST ID : " << students.size() << endl;
	int id;
	string name;
	float score;

	cout << "ID: "; cin >> id; cin.get();

	if (checkIdExit(id, students)) {
		cout << "Name: "; getline(cin, name);
		cout << "score: "; cin >> score;

		Student  student;
		student.ID = id;
		student.Name = name;
		student.Score = score;

		if (insertStudent(student, &students)) {
			cout << "Insert Student success!" << endl;
			continueInsertStudent();
		}
		else cout << "Insert Student Failed!" << endl;
	}
	else {
		cout << "This ID is already Exist, Please try input." << endl;
		continueInsertStudent();
		return;
	}
}

// Check id
bool checkIdExit(int id, vector<Student> students) {
	for (int i = 0; i < students.size(); i++) {
		if (students.at(i).ID == id)
			return false;
	}
	return true;
}


