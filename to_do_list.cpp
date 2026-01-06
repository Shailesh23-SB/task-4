#include <iostream>
using namespace std;

string tasks[10];
int count = 0;

int main() {
    int ch;
    string task;

    do {
        cout << "\n1.Add Task\n2.View Tasks\n3.Delete Task\n4.Exit\n";
        cout << "Choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                cout << "Enter task: ";
                cin.ignore();
                getline(cin, task);
                tasks[count++] = task;
                break;

            case 2:
                for(int i=0;i<count;i++)
                    cout << i+1 << ". " << tasks[i] << endl;
                break;

            case 3:
                int d;
                cout << "Enter task number to delete: ";
                cin >> d;
                for(int i=d-1;i<count-1;i++)
                    tasks[i] = tasks[i+1];
                count--;
                break;
        }
    } while(ch != 4);

    return 0;
}