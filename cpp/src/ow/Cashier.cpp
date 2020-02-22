#include "test.h"
#include <unordered_map>
/** Question no 29 medium Divide Two Integers
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 17th, February, 2020 
 * Source : 
 * 
 * 
*/

class Cashier {
private:
  int cust=0, num, dis;
  std::unordered_map<int, int> catg;
public:
  Cashier(int n, int discount, std::vector<int>& products, std::vector<int>& prices) {
    num = n;
    dis = discount;
    for (int i=0;i<products.size();i++) {
      catg[products[i]] = prices[i];
    }
  }

  double getBill(std::vector<int> product, std::vector<int> amount) {
    ++cust;
    double sales=1.0d;
    if (cust%num == 0)  sales -= dis/100.0d;
    double total=0.0d;
    for (int i=0;i<product.size();i++)  total += catg[product[i]] * amount[i];
    return total*sales;
  }
};


