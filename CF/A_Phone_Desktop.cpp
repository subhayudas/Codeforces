#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int x, y;
        std::cin >> x >> y;
        int remainingCells = 15; // remaining cells in the current screen
        int screensNeeded = 0;
        
        // place 2x2 icons first
        while (y > 0 && remainingCells >= 4) {
            remainingCells -= 4;
            y--;
        }
        screensNeeded += (remainingCells < 15) ? 1 : 0; // increment screen count if remaining cells are less than 15
        
        // place 1x1 icons
        while (x > 0) {
            remainingCells -= 1;
            x--;
            if (remainingCells == 0) {
                remainingCells = 15; // reset remaining cells for the next screen
                screensNeeded++; // increment screen count
            }
        }
        
        std::cout << screensNeeded << std::endl;
    }
    return 0;
}