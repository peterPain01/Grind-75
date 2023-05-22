#include <iostream>

void ip() {
    int n; std::cin >> n; 
    int x, y; 
    for(int i = 0; i < n; ++i) {
        std::cin >> x >> y;
        if(x < y)
            std:: cout << "<\n"; 
        else if(x > y) {
            std:: cout << ">\n"; 
        } 
        else  std::cout << "=\n"; 
    }
}
int main() {
    ip(); 
    return 0;
}