#include <iostream>
using namespace std;

class Volume {

    int length;
    int width;
    int height;
    int vol;

public:
    
    Volume() {
        this->length = 1;
        this->width = 1;
        this->height = 1;
    }
    
    
    Volume(int x, int y, int z) {
        this->length = x;
        this->width = y;
        this->height = z;
    }
    
    
    Volume(int x) {
        this->length = x;
        this->width = x;
        this->height = x;
    }
    
    void calculateVolume() {
        vol = length * width * height;
        cout << "Volume: " << vol << endl;
    }
};

int main() {
    int choice = 1;

    while (choice != 0) {
        cout << "1. No parameter" << endl;
        cout << "2. Single parameter" << endl;
        cout << "3. Parameterized" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                Volume v1;
                v1.calculateVolume();
                break;
            }
            case 2: {
                Volume v2(5);
                v2.calculateVolume();
                break;
            }
            case 3: {
                Volume v3(4, 5, 6);
                v3.calculateVolume();
                break;
            }
            default:
                cout << "Enter a correct choice." << endl;
                break;
        }
    }

    return 0;
}
