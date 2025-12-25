#include "resume.h"

namespace onlits
{
    class Resume
    {
        string name;
        string summary;
        string mobile;
        string email;
        Address address;
        Experience *experience;
        Education *education;
    };
}