//
//  PD_Application.hpp
//  HW2
//
//  Created by Josiah on 2/22/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef PD_Application_hpp
#define PD_Application_hpp

#include <stdio.h>
#include "Array_Based_PD.hpp"
#include <iostream>
#include <istream>
#include <ostream>
#include <limits>
using namespace std;

class PD_Application{
    void process_commands(Phone_Directory&);
    void do_add_change_entry(Phone_Directory&);
    void do_lookup_entry(Phone_Directory&);
    void do_remove_entry(Phone_Directory&);
    void do_save(Phone_Directory&);
};
    
#endif /* PD_Application_hpp */
