#include "Users.h"

void Users::creat_new_user(std::string username,std::string password,
                        std::string name, std::string address)
{
    if (seller_list.contains(username))
        throw "the username already exist!!!";
    Seller new_seller(name,address,password);
    seller_list[username]= new_seller;
}

Seller& Users::get_user(std::string username)
{
    if (seller_list.contains(username))
    {
        std::cout<<seller_list[username].m_name;
        return (seller_list[username]);
        }
    else
        throw "the username doesn't exist!!";
}
