#include <iostream>
#include <string>

using namespace std;

class Deque {
private:
    int* items;
    int size;
    int head;
    int tail;

public:
    Deque(int size) {
        this->size = size;
        this->items = new int[size];
        this->head = 0;
        this->tail = 0;
    }

    void push_back(int item) {
        if (tail == size) {
            cout << "Queue is full" << endl;
            return;
        }

        items[tail] = item;
        tail++;
    }

    int pop_back() {
        if (head == tail) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int item = items[head];
        head++;
        return item;
    }

    void inject(int item) {
        if (head == 0) {
            cout << "Queue is full" << endl;
            return;
        }

        items[head - 1] = item;
        head--;
    }

    int eject() {
        if (head == tail) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int item = items[tail - 1];
        tail--;
        return item;
    }

    void show() {
        int popped_elements[size];
        int i = 0;
        while (head != tail) {
            popped_elements[i] = pop_back();
            i++;
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << popped_elements[j] << " ";
        }

        cout << endl;
    }

    ~Deque() {
        delete[] items;
    }
};

void solve(const string& user_input) {
    Deque deque(10);

    for (const string& operation : user_input) {
        if (operation == "SHOW") {
            deque.show();
            break;
        } else if (operation == "PUSH") {
            int element;
            cin >> element;
            deque.push_back(element);
        } else if (operation == "POP") {
            cout << deque.pop_back() << endl;
        } else if (operation == "INJECT") {
            int element;
            cin >> element;
            deque.inject(element);
        } else if (operation == "EJECT") {
            cout << deque.eject() << endl;
        } else {
            cout << "Invalid operation" << endl;
        }
    }
}

int main() {
    string user_input;
    while (getline(cin, user_input)) {
        solve(user_input);
    }

    return 0;
}
