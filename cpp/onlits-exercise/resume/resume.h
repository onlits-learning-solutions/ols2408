#include <iostream>

using namespace std;

namespace onlits
{
    class Date
    {
        int dd; // instance variable
        int mm;
        int yyyy;

    public:
        void setDate(int dd, int mm, int yyyy)
        {
            this->dd = dd;
            this->mm = mm;
            this->yyyy = yyyy;
        }

        int getDay()
        {
            return dd;
        }

        int getMonth()
        {
            return mm;
        }

        int getYear()
        {
            return yyyy;
        }
    };

    class Experience
    {
        string jobTitle;
        string employer;
        string location;
        Date startDate;
        Date endDate;

        void init(string jobTitle, string employer, string location, Date startDate, Date endDate)
        {
        }
    };
}