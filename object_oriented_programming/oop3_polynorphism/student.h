#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>
#include <iostream>
#include "user.h"

class Student : public User
{
    public:
        void output();
        Student();
};

#endif