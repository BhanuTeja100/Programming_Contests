class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
           if (head == nullptr || *head == nullptr) {
            return;
        }
        
        // Store the data of nodes in a vector
        vector<int> data_vec;
        Node* curr = *head;
        while (curr != nullptr) {
            data_vec.push_back(curr->data);
            curr = curr->next;
        }
        
        // Sort the vector
        std::sort(data_vec.begin(), data_vec.end());
        
        // Update the linked list with sorted data
        curr = *head;
        for (int i = 0; i < data_vec.size(); ++i) {
            curr->data = data_vec[i];
            curr = curr->next;
        }
    }
};