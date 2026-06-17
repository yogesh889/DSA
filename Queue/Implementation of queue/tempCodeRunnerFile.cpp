
            if(front == nullptr){
                cout<<"Underflow \n";
                return;
            }
            Node* temp = front;
            front = front->next;
            delete temp;

            if(front == nullptr){
                rear = nullptr;
            }
        }

        int getFront(){
            if(front == nullptr){
                return -1;
            }
            return front->data;
        }