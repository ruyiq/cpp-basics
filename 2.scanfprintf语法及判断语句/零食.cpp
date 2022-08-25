#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int id, num;

    cin >> id >> num;

    if (id ==1){
        printf("Total: R$ %.2f \n", 4.00*num);
    } else if (id == 2) {
        printf("Total: R$ %.2f \n", 4.50*num);
    } else if (id == 3) {
        printf("Total: R$ %.2f \n", 5.00*num);
    } else if (id == 4) {
        printf("Total: R$ %.2f \n", 2.00*num);
    } else if (id == 5) {
        printf("Total: R$ %.2f \n", 1.50*num);
    }
    return 0;
}