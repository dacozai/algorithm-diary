#include "test.h"
#include <unordered_map>
/** Question no 1386 medium Cinema Seat Allocation
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 22th, March, 2020 
 * Source : https://leetcode.com/problems/cinema-seat-allocation/
 * 
 * A cinema has n rows of seats, numbered from 1 to n and there are ten seats in each row, labelled from 1 to 10 as shown in the figure above.
 * 
 * Given the array reservedSeats containing the numbers of seats already reserved, 
 * for example, reservedSeats[i]=[3,8] means the seat located in row 3 and labelled with 8 is already reserved. 
 * 
 * Return the maximum number of four-person families you can allocate on the cinema seats. 
 * A four-person family occupies fours seats in one row, that are next to each other. 
 * Seats across an aisle (such as [3,3] and [3,4]) are not considered to be next to each other, however, 
 * It is permissible for the four-person family to be separated by an aisle, but in that case, 
 * exactly two people have to sit on each side of the aisle.
 * 
*/

/** Solution
 * Runtime 36 ms	MeMory 8 MB; 
 * faster than 65.36%, less than 100.00%
 * O(n) ; O(n)
*/

int maxNumberOfFamilies(int n, std::vector<std::vector<int>>& reservedSeats) {
  std::unordered_map<int, int> mp;
  int ans=2*n;
  
  for (auto seat: reservedSeats) {
    int row = seat[0], col = seat[1], bny;
    if (mp.find(row) == mp.end()) mp[row] = 7;
    int bf = mp[row];
    
    if (col == 4 || col == 5) mp[row]%=2;
    else if (col == 6 || col == 7) {
      mp[row]>>=2;
      mp[row]<<=2;
    } else if ((col == 2 || col == 3) && mp[row]>3) mp[row]%=4;
    else if (col == 8 || col == 9) {
      mp[row]>>=1;
      mp[row]<<=1;
    } else continue;
    
    if (bf-mp[row] == 0) continue;
    else if (bf==7) ans--;
    else if (mp[row]==0) ans--;
  }
  
  return ans;
}