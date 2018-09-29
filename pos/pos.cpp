#include "cpp_all_headers.hpp"
using namespace std;

class stock {
public:

private:

};

class asset {
public:

private:

};


int main() {
  int choose;
  cout<<"1. calculation 2. profit 3.stock 4.asset"<<endl;
  cin>>choose;

  //calculation
  if(choose == 1) {
    calculation cal;
    int price;
    int money;

    cout<<"Enter the Money"<<endl;
    cin>>money;
    cout<<"Enter the Price"<<endl;
    cin>>price;

    cal.cal_exchange(money, price);
  }
  //profit
  else if(choose == 2) {

  }
  //stock
  else if(choose == 3) {

  }
  //asset
  else if(choose == 4) {

  }
}
