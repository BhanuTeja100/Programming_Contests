class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
       Node* new_Node = new Node(data);
       
       if(head == NULL){
        new_Node->next = new_Node;    
        return new_Node;
       } 
       
       Node* temp = head;
       
       if(data < head->data){
           while(temp->next != head){
               temp = temp->next;
           }
           temp->next = new_Node;
           new_Node->next = head;
           return new_Node;
       }
       
       while(temp->next != head && temp->next->data < data){
           
        
            temp = temp->next;
        }

        new_Node->next = temp->next;
        temp->next = new_Node;

        return head;
           
        
    }
};