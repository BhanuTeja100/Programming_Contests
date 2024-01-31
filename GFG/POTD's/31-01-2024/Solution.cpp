class Solution
{
    public:
        //Function to insert string into TRIE.
       void insert(struct TrieNode *root, string key)
        {
            // code here
            int n=key.size();
            TrieNode* node=root;
            for(int i=0; i<n; i++){
                int j=key[i]-'a';
                if(node->children[j]==NULL){
                    node->children[j]=new TrieNode();
                }
                node=node->children[j];
            }
            node->isLeaf=1;
        }
        
        //Function to use TRIE data structure and search the given string.
        bool search(struct TrieNode *root, string key) 
        {
            // code here
            int n=key.length();
            TrieNode* node=root;
            for(int i=0; i<n; i++){
                int j=key[i]-'a';
                if(node->children[j]==NULL) return 0;
                node=node->children[j];
            }
            return (node->isLeaf==1);
        }
};