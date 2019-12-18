class Solution {
    // BruteForce Solution - O (N^2)
    public int solution(int[] A) {
        // write your code in Java SE 8
        // write your code in Java SE 8
        int LEN = A.length;
        if (LEN == 3)  return A[0]*A[1]*A[2];
        int biggerThanZero = 0;
        // Bubble Sort
        for (int i=0;i<LEN;i++) {
            for (int j=i+1;j<LEN;j++) {
                if (A[i] > A[j]) {
                    int tmp = A[i];
                    A[i] = A[j];
                    A[j] = tmp;
                }
            }
            if (A[i]>0) biggerThanZero+=1;
        }
        
        if (biggerThanZero >2 || biggerThanZero < 1)
            if (A[LEN-1] * A[LEN-2] * A[LEN-3] > A[LEN-1] * A[1] * A[0]) 
                return A[LEN-1] * A[LEN-2] * A[LEN-3];
      
        return A[LEN-1] * A[1] * A[0];
    }
}