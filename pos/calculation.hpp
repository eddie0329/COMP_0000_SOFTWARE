#include "cpp_all_headers.hpp"
#include "controller.hpp"
using namespace std;

class calculation:controller{
public:

  int cal_exchange(int money, int price) {
    int exchange = money - price;

    cout<<"Exchange :"<<exchange<<endl;

    return exchange;
  }

private:

};
