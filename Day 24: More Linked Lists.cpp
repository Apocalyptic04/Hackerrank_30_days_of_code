          Node* removeDuplicates(Node *head)
          {
            //Write your code here
             if (!head)
                return head;
                         
            Node *node = head;
            while (node->next) {
                if (node->data == node->next->data) 
                    node->next = node->next->next;
                else
                    node = node->next;
                }
            return head;
            }

