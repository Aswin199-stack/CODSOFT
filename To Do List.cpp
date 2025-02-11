#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    do {

        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Remove Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter task: ";
                getline(cin, task);
                tasks.push_back(task);
                break;

            case 2:
                if (tasks.empty()) {
                    cout << "No tasks to show!\n";
                } else {
                    cout << "\nTo-Do List:\n";
                    for (int i = 0; i < tasks.size(); i++) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;

            case 3:
                if (tasks.empty()) {
                    cout << "No tasks to remove!\n";
                } else {
                    int taskNumber;
                    cout << "Enter task number to remove: ";
                    cin >> taskNumber;


                    if (taskNumber > 0 && taskNumber <= tasks.size()) {
                        tasks.erase(tasks.begin() + taskNumber - 1);
                        cout << "Task removed successfully!\n";
                    } else {
                        cout << "Invalid task number.\n";
                    }
                }
                break;

            case 4:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}

