# go_boost_hashcode
A go hash code like c++ boost hashcode

## Boost Hash Code
http://www.boost.org/doc/libs/1_47_0/doc/html/hash.html(http://www.boost.org/doc/libs/1_47_0/doc/html/hash.html)
```c
boost::hash<std::string> string_hash;
std::size_t h = string_hash("Hash me");

```

## C++ Code From Boost Source
```c
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

    // Get From Boost Source
    std::size_t seed = 0;
    for(std::string::iterator it = st.begin(); it != st.end(); ++it)
    {
        seed ^= size_t(*it) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        printf("-- %ld %d\n", seed, *it);
    }
    printf("%s %ld %u\n", st.c_str(), seed,  (unsigned short)seed); 

}
```
![pic]/image/01.jpg)



---
## GO Code Like Boost Hash Code
```go
package main

import (
    "fmt"
)

func main() {
    st := "get_t_user_info"
    var seed uint64 = 0
    var magicNumber uint64 = 0x9e3779b9
    for _, s := range st {
        seed ^= uint64(s) + magicNumber + (seed << 6) + (seed >> 2)
        fmt.Println("--", seed, s)
    }

    fmt.Println(st, seed, uint16(seed))
}
```
![pic]/image/02.jpg)

