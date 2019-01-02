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
bool loadStudentsFromFile(vector<Student> *students);

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
	case 4:
		if (loadStudentsFromFile(&students)) cout << "Load file to List success!" << endl;
		else cout << "Load file to List Failed. Try it!" << endl;
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


bool checkIdExit(int id, vector<Student> students) {
	for (int i = 0; i < students.size(); i++) {
		if (students.at(i).ID == id)
			return false;
	}
	return true;
}


bool insertStudent(Student student, vector<Student> *students) {
	int oldSize = students->size();
	students->push_back(student);

	if (oldSize < students->size())
		return true;
	return false;
}

void continueInsertStudent() {
	cout << "You want continue insert student? (Y/N)";

	char select;
	cin >> select;
	if (select == 'Y') getInforStudent();
}

void showStudents(vector<Student> students) {
	system("cls");
	cout << "ID\t\tFull Name\t\tScore" << endl;
	for (int i = 0; i < students.size(); i++) {
		cout << students.at(i).ID << "\t\t";
		cout << students.at(i).Name << "\t\t";
		cout << students.at(i).Score << endl;
	}
	cout << endl << endl;
	system("pause");
}

bool saveStudentsToFile(vector<Student> students) {
	ofstream insertToFile(FILE_PATH, std::ios::out);
	for (int i = 0; i < students.size(); i++) {
		insertToFile << students.at(i).ID << endl;
		insertToFile << students.at(i).Name << endl;
		insertToFile << students.at(i).Score << endl;
		if (insertToFile.fail())
			return false;
	}

	insertToFile.close();
	return true;
}

bool loadStudentsFromFile(vector<Student> *students) {
	int oldSize = students->size();
	ifstream fileToList(FILE_PATH);
	if (fileToList.fail()) return false;
	int numLine = 0;
	Student student;
	string line;
	int id;
	float score;
	while (getline(fileToList, line))
	{
		numLine++;
		switch (numLine)
		{
		case 1:
			id = stoi(line);
			student.ID = id;
			break;
		case 2:
			student.Name = line;
			break;
		case 3:
			score = stof(line);
			student.Score = score;
			numLine = 0;
			students->push_back(student);
			break;
		default:
			break;
		}
	}

	fileToList.close();
	if (oldSize < students->size()) return true;
	else return false;
}