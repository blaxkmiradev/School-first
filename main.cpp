#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    float score;
};

vector<Student> students;


void addStudent() {
    Student s;
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Score: ";
    cin >> s.score;

    students.push_back(s);
    cout << "Student added!\n";
}


void showStudents() {
    if (students.empty()) {
        cout << "No students found!\n";
        return;
    }

    for (auto s : students) {
        cout << "ID: " << s.id 
             << " | Name: " << s.name 
             << " | Score: " << s.score << endl;
    }
}

// Search student
void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (auto s : students) {
        if (s.id == id) {
            cout << "Found -> Name: " << s.name 
                 << ", Score: " << s.score << endl;
            return;
        }
    }
    cout << "Student not found!\n";
}

int main() {
    int choice;

    while (true) {
        cout << "\n--- School Manager ---\n";
        cout << "1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: showStudents(); break;
            case 3: searchStudent(); break;
            case 4: return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}
