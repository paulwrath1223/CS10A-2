//
// Created by paulw on 3/29/2023.
//

#include <iostream>

void print_rectangle(int, int, bool);
void print_triangle(int, bool);


int main() {
    int rocket_width = 0;
    std::cout << "Dimension#1: Enter Rocket module width (a number between 10-15): ";
    std::cin >> rocket_width;
    while(rocket_width > 15 || rocket_width < 10){
        std::cout << "Try again\n";
        std::cout << "Dimension#1: Enter Rocket module width (a number between 10-15): ";
        std::cin >> rocket_width;
    }
    std::cout << std::endl;
    int rocket_height = 0;
    std::cout << "Dimension#2: Enter Rocket module height (a number between 5-10): ";
    std::cin >> rocket_height;
    while(rocket_height > 10 || rocket_height < 5){
        std::cout << "Try again\n";
        std::cout << "Dimension#2: Enter Rocket module height (a number between 5-10): ";
        std::cin >> rocket_height;
    }
    std::cout << std::endl;
    int payloads = 0;
    std::cout << "Rocket payload: Enter number of rocket body payload modules to dock together (a number between 2-5): ";
    std::cin >> payloads;
    while(payloads>5 || payloads<2){
        std::cout << "Try again\n";
        std::cout << "Rocket payload: Enter number of rocket body payload modules to dock together (a number between 2-5): ";
        std::cin >> payloads;
    }
    std::cout << std::endl;
    char body_type = ' ';
    std::cout << "Rocket Body: Enter empty or filled cargo space or payload type in module/s (E - empty or F - filled): ";
    std::cin >> body_type;
    while(!(body_type=='F' || body_type=='E')){
        std::cout << "Try again\n";
        std::cout << "Rocket Body: Enter empty or filled cargo space or payload type in module/s (E - empty or F - filled): ";
        std::cin >> body_type;
    }
    std::cout << std::endl;
    bool payload_filled = body_type=='F';

    print_triangle(rocket_width, !payload_filled);
    for(int i = 0; i<payloads; i++){
        print_rectangle(rocket_width, rocket_height, payload_filled);
    }


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


void print_triangle(int base, bool filled) {  // TODO: FLUSH THING TRIANGLE
    for(int i = 0; i<base/2 + (base%2==1); i++){
        for(int j = 0; j<base; j++){
            if(filled){  //  || i == base/2 - (base%2==0)
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

void drawRocketBoosters(base)