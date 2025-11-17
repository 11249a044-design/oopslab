#include <iostream> 
#include <vector> 
#include <stdexcept> 
using namespace std; 
int main() { 
int n; 
cout << "Enter number of students: "; 
cin >> n; 
vector<int> marks; 
for (int i = 0; i < n; ++i) { 
int m; 
cout << "Enter mark for student " << i+1 << ": "; 
cin >> m; 
try { 
if (m < 0 || m > 100) throw invalid_argument("Mark out of range"); 
marks.push_back(m); 
} catch (const invalid_argument& ex) { 
cout << "Invalid mark (" << m << "): " << ex.what() << ". 
Skipping.\n"; 
} 
} 
cout << "\nValid marks entered:\n"; 
for (size_t i = 0; i < marks.size(); ++i) 
cout << "Student " << i+1 << ": " << marks[i] << endl; 
return 0; 
} 
