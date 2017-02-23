//
//  Directory_Entry.hpp
//  HW2
//
//  Created by Josiah on 2/22/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Directory_Entry_h
#define Directory_Entry_h
#include <iostream>
using namespace std;

class Directory_Entry{
private:
    string name;
    string number;
public:
    Directory_Entry(string name, string number);
    string get_name() const;
    string get_number() const;
    void set_number(const string& new_number);
};

#endif /* Directory_Entry_h */
