#include <iostream>
#include <string>
using namespace std;

const int max_tasks = 100;

struct Task {
    string description;
    bool isComplete;
};

Task tasks[max_tasks];
int taskCount = 0;

void addTask(const string& description) {
    if (taskCount < max_tasks) {
        tasks[taskCount].description = description;
        tasks[taskCount].isComplete = false;
        taskCount++;
    } else {
        cout << "Task list is full." << endl;
    }
}

void deleteTask(int index) {
    if (index < 0 || index >= taskCount) {
        cout << "Invalid index." << endl;
        return;
    }
    for (int i = index; i < taskCount - 1; ++i) {
        tasks[i] = tasks[i + 1];
    }
    taskCount--;
}

void markTaskComplete(int index, bool complete) {
    if (index < 0 || index >= taskCount) {
        cout << "Invalid index." << endl;
        return;
    }
    tasks[index].isComplete = complete;
}

void displayTasks() {
    for (int i = 0; i < taskCount; ++i) {
        cout << i << ": " << tasks[i].description
                  << " [" << (tasks[i].isComplete ? "Complete" : "Incomplete") << "]" << endl;
    }
}

int main() {
    int choice;
    string description;
    int index;

    while (true) {
        cout<<"-----------------------------------------------------------"<<endl;
        cout << "1. Add Task\n2. Delete Task\n3. Mark Task as Complete\n4. Mark Task as Incomplete\n5. Display Tasks\n6. Exit\n";
        cout << "Enter your choice: ";
        cout<<"-----------------------------------------------------------"<<endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore();
                cout << "Enter task description: ";
                getline(cin, description);
                addTask(description);
                break;
            case 2:
                cout << "Enter task index to delete: ";
                cin >> index;
                deleteTask(index);
                break;
            case 3:
                cout << "Enter task index to mark as complete: ";
                cin >> index;
                markTaskComplete(index, true);
                break;
            case 4:
                cout << "Enter task index to mark as incomplete: ";
                cin >> index;
                markTaskComplete(index, false);
                break;
            case 5:
                displayTasks();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
