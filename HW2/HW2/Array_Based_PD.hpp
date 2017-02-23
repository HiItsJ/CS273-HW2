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
#include "Directory_Entry.hpp"

class Directory_Entry;

class Array_Based_PD : public Phone_Directory{
private:
    int size;
    int capacity;
    Directory_Entry* the_directory;
    string source_name;
    bool modified;
    int find(string& name) const;
    void add(const string& name, string& number);
    string remove_entry(const string& name);
    void rellocate();
public:
    void load_data(const string& source_name);
    string add_or_change_entry(const string& name, const string& number);
    string lookup_entry(const string& name) const;
    void save();
};

#endif /* Array_Based_PD_h */
