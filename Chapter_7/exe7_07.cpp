#include <iostream>
#include "./exe7_06.h"

int main()
{
    Sales_data total;
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else{
                print(std::cout, total);
                total = trans;
            }
        }
        print(std::cout, total);
    }
    else{
        std::cerr << "No Data!" << std::endl;
        return -1;
    }
    return 0;
}
