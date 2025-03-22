#include <iostream>
using namespace std;

// Overloaded functions
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Function template
template <class T, class F>
T add(T a, F b) {
    return a + b;
}

// Namespace
namespace nums {
    int x = 789;
    int y = 432;
}

// Data structure
struct song {
    string artist;
    int year;
    double duration;
};

int main() {
    int x = 3, y = 2;
    double n = 9.7, m = 2.6;
    cout << add(x, y) << endl;  
    cout << add(n, m) << endl;  
    

    cout << add(3, 5.6) << endl;  
    
    cout << nums::x << endl;
    cout << nums::y << endl;
    
    song redemption;
    redemption.artist = "Drake";
    redemption.year = 2016;
    redemption.duration = 5.32;
    
    cout << redemption.artist << '\n';
    cout << redemption.year << '\n';
    cout << redemption.duration << '\n';

    return 0;
}
