f#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int grade[6], max(0);
    string name[6], maxname;
    ifstream inputfile;
      inputfile.open ("studentsGrades.txt");
    if (inputfile.fail())
        cout<< "Unable to open file\n";
    else
    {
        int i=0;
        while (!inputfile.eof() && i<6)
        {
            inputfile>> name[i]>> grade[i];
            if (grade[i]>max)
            {
                max=grade[i];
                maxname=name[i];
            }
            i++;
        }
    }
    
    inputfile.close();
    ofstream outputfile;
    outputfile.open ("topstudent.txt");
    outputfile << maxname<< "   "<< max;
    outputfile.close();

    
return 0 ;}
