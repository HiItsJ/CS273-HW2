//
//  Phone_Directory.hpp
//  HW2
//
//  Created by Josiah on 2/22/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Phone_Directory_h
#define Phone_Directory_h

class Phone_Directory{
    virtual void load_data(const string& source_name);
    virtual string add_or_change_entry(const string& name, const string& number);
    virtual string lookup_entry(const string& name) const;
    virtual string remove_entry(const string& name);
    virtual void save();
}

#endif /* Phone_Directory_h */
