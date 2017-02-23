//
//  PD_Application.cpp
//  HW2
//
//  Created by Josiah on 2/22/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "PD_Application.hpp"

void PD_Application::do_remove_entry(Phone_Directory& the_directory){
    string name;
    cout << "Enter name: ";
    getline(cin, name);
    the_directory.remove_entry(name);
}
