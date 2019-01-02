#include<iostream>
#include<vector>
#include<string>

using namespace std;

void question();
void getInforStudent();
void showStudents(vector<Student> students);

struct Student
{
	int _id;
	string _name;
	float _score;
};

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
