#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Declaration of variables.
    string path1 = "";
    string path2 = "";
    string garbage = "";
    int cnt = 0;


    //Taking the input for both the files by their respective names.
    cout<<"Enter file path to read the file : ";
    getline(cin,path1);
    cout<<"Enter file path to write into the file : ";
    getline(cin,path2);


    //Inflow and Outflow of data.
    ifstream infile(path1.c_str());
    ofstream outf(path2.c_str());


    //sdasd
    vector<pair<double,pair<double,double>>> vec;

    double x[3];
    double y[3];
    double z[3];
    while (infile)
    {
        for(int i=0; i<3;i++)
        {
            infile >> x[i];
        }
        for(int i=0; i<3;i++)
        {
            infile >> y[i];
        }
    }


    for(int i=0; i<3;i++)
        {
            z[i] = sqrt(x[i]*x[i] + y[i]*y[i]);
            vec.push_back({z[i], {x[i], y[i]}});
        }



        sort(vec.begin(), vec.end());

        for(int i=0;i<3;i++)
        {
            outf << vec[i].second.first <<",";
            outf << vec[i].second.second <<" ";
            outf << "<- Coordinates     Distance ->" <<vec[i].first <<" ";
            outf << "\n";
        }

        cout << " Data is Successfully Inserted";

        infile.close();
        outf.close();  
    


   
    /*std::ifstream input("points.txt");

    while (!input.eof())
    {
        int x, y;
        char separator;

        input >> x  >> separator >> y;

        cout << x << ", " << y << endl;
    }
    */

}