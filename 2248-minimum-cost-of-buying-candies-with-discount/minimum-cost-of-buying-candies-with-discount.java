class Solution {
    public int minimumCost(int[] cost) {
        int n = cost.length;
        Arrays.sort(cost);

        int i = n-1;
        int min_amount = 0;
        while(i >= 0){
            if(i >= 0) min_amount += cost[i--];
            if(i >= 0) min_amount += cost[i--];
            if(i >= 0) i--;
        }
        return min_amount;
    }
}