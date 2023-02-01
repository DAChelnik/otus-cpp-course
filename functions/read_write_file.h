#pragma once

#include <iostream>
#include <string>

namespace read_write_file {
    bool  write_to_file(std::string user_name, int attempts_count);
    bool read_from_file();
}