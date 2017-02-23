//
//  Array_Based_PD.cpp
//  HW2
//
//  Created by Josiah on 2/22/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <stdio.h>
#include "Array_Based_PD.hpp"

int Array_Based_PD::find(string &name) const{
    for (int i=0; i<size; i++){
        if (the_directory[i].get_name()==name){
            return i;
        }
    }
    return -1;
}
void Array_Based_PD::add(const string &name, string &number){
    if (size==capacity){
        rellocate();
    }
    the_directory[size] = Directory_Entry(name, number);
    size++;
}
string Array_Based_PD::remove_entry(const string& name){
    if (find(name)>0){
        Directory_Entry* new_dir[size-1];
        for (int i=0; i<size-1; i++){
            new_dir[i] = &the_directory[i];
        }
        for (int i=the_directory[find(name)]; i<size-1; i++){
            new_dir[i] = &the_directory[i+1];
        }
        the_directory = new_dir;
        return the_directory[find(name)].get_number();
    }
    else{
        return "";
    }
}
