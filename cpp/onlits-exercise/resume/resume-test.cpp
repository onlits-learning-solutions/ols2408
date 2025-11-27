#include "resume.h"

using namespace onlits;

int main(void)
{
    Date startDate;
    startDate.setDate(27, 11, 2025);
    cout << "Entered date is: " << startDate.getDay() << "/" << startDate.getMonth() << "/" << startDate.getYear();
}