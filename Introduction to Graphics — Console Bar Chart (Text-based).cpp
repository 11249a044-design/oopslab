#include <iostream>
#include <vector> 
#include <iomanip> 
using namespace std; 
int main() { 
vector<int> marks(5); 
cout << "Enter marks for 5 subjects (0-100):\n"; 
for (int i = 0; i < 5; ++i) { 
cin >> marks[i]; 
if (marks[i] < 0) marks[i] = 0; 
if (marks[i] > 100) marks[i] = 100; 
} 
cout << "\nText Bar Chart (each * = 2 marks)\n\n"; 
for (int i = 0; i < 5; ++i) { 
cout << "Sub" << (i+1) << " [" << setw(3) << marks[i] << "]: "; 
int bars = marks[i] / 2; 
for (int j = 0; j < bars; ++j) cout << '*'; 
cout << '\n'; 
} 
return 0; 
} 
