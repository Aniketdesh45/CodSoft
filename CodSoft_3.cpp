#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the to-do list
void displayTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "Your to-do list is empty." << endl;
    } else {
        cout << "Your to-do list:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

// Function to add a task to the list
void addTask(vector<string>& tasks) {
    string task;
    cout << "Enter the task: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, task); // Get the entire task as a string
    tasks.push_back(task);
    cout << "Task added successfully!" << endl;
}

// Function to delete a task from the list
void deleteTask(vector<string>& tasks) {
    int taskNumber;
    displayTasks(tasks);
    if (!tasks.empty()) {
        cout << "Enter the task number to delete: ";
        cin >> taskNumber;

        if (taskNumber > 0 && taskNumber <= tasks.size()) {
            tasks.erase(tasks.begin() + taskNumber - 1);
            cout << "Task deleted successfully!" << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }
}

int main() {
    vector<string> tasks;
    int choice;

    do {
        cout << "\n--- To-Do List Manager ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                displayTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                cout << "Exiting the To-Do List Manager." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
