struct Node {
    int val;
    Node* next;

    Node(int value) {
        val = value;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;

    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        Node* temp = head;
        int cnt = 0;

        while (temp) {
            if (cnt == index) {
                return temp->val;
            }

            cnt++;
            temp = temp->next;
        }

        return -1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        int cnt = 0;

        while (temp) {
            cnt++;
            if (cnt == index) {
                Node* newNode = new Node(val);

                newNode->next = temp->next;
                temp->next = newNode;

                return;
            }

            temp = temp->next;
        }
    }
    
    void deleteAtIndex(int index) {
        if (head == nullptr) {
            return;
        }

        if (index == 0) {
            Node* temp = head->next;
            delete head;
            head = temp;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        int cnt = 0;

        while (temp) {
            if (cnt == index) {
                Node* front = temp->next;
                prev->next = front;
                delete temp;
                return;
            }

            prev = temp;
            cnt++;
            temp = temp->next;
        }
    }
};