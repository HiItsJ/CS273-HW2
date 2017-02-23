//
//  Directory_Entry.cpp
//  HW2
//
//  Created by Josiah on 2/22/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <stdio.h>
#include "Directory_Entry.hpp"

Directory_Entry::Directory_Entry(string name, string number){
    this->name = name;
    this->number = number;
}
string Directory_Entry::get_name() const{
    return name;
}
string Directory_Entry::get_number() const{
    return number;
}
void Directory_Entry::set_number(const string& new_number){
    number = new_number;
}
