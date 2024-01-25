class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(Item x, Item y){
        double a = (double)x.value / (double)x.weight;
        double b = (double)y.value / (double)y.weight;
        
        return a>b;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        
        sort(arr, arr+n, comp);
        
        double sol = 0.0;
        
        int i = 0;
        
        
        while( i<n && W>0){
            
            if(W >= arr[i].weight){
                sol = sol +  arr[i].value;
                 W = W - arr[i].weight;
            }
            else{
                sol += (double)W/(double)arr[i].weight*(double)arr[i].value;
                W = 0;
            }
            i++;
        }
        return sol;
    }
        
};