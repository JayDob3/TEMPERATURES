//
//  main.cpp
//  TEMPERATURES
//
//  Created by Janera Dobson on 6/24/20.
//  Copyright © 2020 Janera Dobson. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>


using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N; // the number of temperatures to analyse
    cin >> N;
    cin.ignore();
    string TEMPS; // a temperature expressed as an integer ranging from -273 to 5526

    if (N == 0) {
      cout << 0 << endl;
      return 0;
    }

    getline(cin, TEMPS);

    istringstream buf(TEMPS);

    int t, m;
    buf >> m;
    for (int i = 1; i < N; ++i) {

      buf >> t;

      if (t >= 0 && m > t || t <= 0 && m < t || t > 0 && m <= -t || t < 0 && m > -t) {
        m = t;
      }
    }
    cout << m << endl;
    return 0;
}

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
