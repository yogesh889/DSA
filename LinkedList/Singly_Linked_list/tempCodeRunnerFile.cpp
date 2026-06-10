    int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }

        void insert_at_specific_position(int value, int pos, Node* head){
            Node* newNode = new Node(value);

            if(pos == 1){
                newNode->next = head;
                head = newNode;
                return;
            }

            Node* temp = head;

            // traversing using loop
            for(int i=1; i<pos-1 && temp!=nullptr; i++){
                temp = temp->next;
            }

            if(temp == nullptr){
                cout<<"Invalid position";
                return;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }