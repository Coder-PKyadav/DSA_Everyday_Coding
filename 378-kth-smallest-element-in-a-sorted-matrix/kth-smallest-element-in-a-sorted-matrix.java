class Solution {
    public int kthSmallest(int[][] matrix, int k) {
        int n=matrix.length;

        PriorityQueue<Integer>pq=new PriorityQueue<>();
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             pq.add(matrix[i][j]);
            }
        }
        // traverse the priority queue
        for(int i=1;i<k;i++){
            pq.remove();
        }
        return pq.peek();
        
    }
}