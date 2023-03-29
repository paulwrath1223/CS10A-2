#include <iostream>

void print_rectangle(int, int, bool);
void print_triangle(int, bool);


int main() {
    print_rectangle(5,5,false);
    print_triangle(9, false);

    return 0;
}
/**
 *
 * @param x width of rectangle
 * @param y height of rectangle
 * @param filled is the interior of the rectangle filled
 */
void print_rectangle(/*in*/int x, /*in*/int y, /*in*/bool filled){
    for(int y_index = 0; y_index < y; y_index++){
        for(int x_index = 0; x_index < x; x_index++){
            if (!filled &&
                            y_index != 0 && y_index != y-1 &&
                            x_index != 0 && x_index != x-1) {
                std::cout << "  ";
            } else {
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}


void print_triangle(int base, bool filled) {
    for(int i = 0; i<base/2 + (base%2==1); i++){
        for(int j = 0; j<base; j++){
            if(filled || i == base/2 - (base%2==0)){
                if(j>=base/2-i-(base%2==0) && j<=base/2+i){
                    std::cout << "* ";
                }
                else {
                    std::cout << "  ";
                }
            } else {
                if(j==base/2-i-(base%2==0) || j==base/2+i){
                    std::cout << "* ";
                }
                else {
                    std::cout << "  ";
                }
            }
        }
        std::cout << std::endl;
    }
}