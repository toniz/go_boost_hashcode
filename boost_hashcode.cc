#include <iostream> 
#include <string.h>
#include <hash.hpp> 
 #include <stdio.h>  
boost::hash<std::string> hash_fn;
int main()
{
    std::string st = "get_t_user_info";
    std::size_t code = hash_fn("get_t_user_info");
    printf("%s %ld %u\n", st.c_str(), code,  (unsigned short)code);

    std::size_t seed = 0;
    for(std::string::iterator it = st.begin(); it != st.end(); ++it)
    {
        seed ^= size_t(*it) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        printf("-- %ld %d\n", seed, *it);
    }
    printf("%s %ld %u\n", st.c_str(), seed,  (unsigned short)seed); 

}

