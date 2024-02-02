class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           string bits = "";
           long long unsigned int multiplier = 1;
           long long unsigned int res = 0;
           Node *temp = head;
           
            // basecase
           if(head == NULL) return 0;
           
           // storing all the bits
           while(temp != NULL){
               bits += to_string(temp->data);
               temp = temp->next;
           }
           
           
           // Calculating the result
           for(int i=bits.length()-1; i>=0; i--){
               res = res + (bits[i]-'0')*(multiplier);
               res %= MOD;
               multiplier *= 2;
               multiplier %= MOD;
           }
           
           return (res%MOD);
        }
};