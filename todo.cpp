#include <iostream>
#include <vector>
#include <string>

using namespace std;

void showMenu() {
    cout << "\n===== TO-DO LIST APP =====\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    vector<string> tasks;
    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string task;
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task added successfully!\n";
        }
        else if (choice == 2) {
            if (tasks.empty()) {
                cout << "No tasks available.\n";
            } else {
                cout << "\nYour Tasks:\n";
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            int index;
            cout << "Enter task number to delete: ";
            cin >> index;

            if (index > 0 && index <= tasks.size()) {
                tasks.erase(tasks.begin() + index - 1);
                cout << "Task deleted successfully!\n";
            } else {
                cout << "Invalid task number.\n";
            }
        }
        else if (choice == 4) {
            cout << "Exiting To-Do App. Goodbye!\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
