//
//  main.cpp
//  GPA Calculator
//
//  Created by Mark Daoud on 4/15/14.
//  Copyright (c) 2014 Mark Daoud. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int total;
    int earned;
    double results;
    char again;
    
    cout << "Enter the grades earned per class";
    cin  >> earned;
    
    cout << "Enter the units per class";
    cin  >> total;
    
    do{
        results = ( earned * total ) / total;
        cout << "Your GPA is " << results;
        cout << " Do you want to calculate your GPA agian? yes (y) or no (n)";
        cin  >> again;
    }
    while ( again == 'y' || again == 'Y' );
    return 0;
    
}


