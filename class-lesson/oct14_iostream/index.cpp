#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inFile;
    inFile.open("input.txt");
    int x, y, output;
    output = x + y;
    ofstream outFile;
    outFile.open("output.txt", ios::app); //app = append // Opens (and overwrites) the output file
    // This loop reads pairs of numbers until it reaches the end of the file
    while (inFile >> x >> y)
    {
        int output = x + y;
        outFile << output << endl; // endl puts each result on a new line
    }

    // --- ADD THIS PART ---
    // After the loop finishes, write a separator line to mark the end of this run
    outFile << "--- End of Run ---" << endl;
    // Or if you just want a blank space: outFile << endl;


    // Close files (optional since destructors handle this automatically, but good practice)
    inFile.close();
    outFile.close();

    return 0;
}

// outFile.open("outfile.txt", ios::app); // Appends data to the end of the file