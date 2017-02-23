//
//  Array_Based_PD.hpp
//  HW2
//
//  Created by Josiah on 2/22/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Array_Based_PD_h
#define Array_Based_PD_h
#include "Phone_Directory.hpp"

class Array_Based_PD : public Phone_Directory{
private:
    int size;
    int capacity;
    Directory_Entry* the_directory;
    string source_name;
    bool modified;
    void add();
    string find();
    void rellocate();
public:
    void load_data();
    string add_or_change_entry();
    string lookup_entry();
    string remove_entry();
    void save();
};

#endif /* Array_Based_PD_h */
