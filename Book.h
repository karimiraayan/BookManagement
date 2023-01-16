#pragma once
#include <string>


class Book
{
    public:
        Book()= default;
        Book(std::string name, short year, std::string genres, double price );
        void add_discribtion(std::string_view discribtion);
        void print_book();
        void print_book_full();
        std::string get_name();
    private:
        std::string m_name;
        short m_year;
        std::string m_genres;
        std::string m_discribtion;
        double m_price;
};
