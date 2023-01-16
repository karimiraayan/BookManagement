#pragma once
#include <map>
#include "Seller.h"
#include <string>
#include <iostream>

class Users
{
    public:
        void creat_new_user(std::string username,std::string password,
                         std::string name, std::string address);
        Seller& get_user(std::string username);
        friend std::ostream& operator<<(std::ostream& os,const Users &users);

    private:
        std::map<std::string , Seller > seller_list;

};
