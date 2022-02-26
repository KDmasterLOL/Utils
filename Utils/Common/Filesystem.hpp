#pragma once

#include <filesystem>
#include <Utils/Common/String.hpp>

namespace fs = std::filesystem;

namespace FSUtils
{
    string GetFileNameWithoutExtension(const fs::path& path)
    {
        if (!path.has_filename())
            return string();
        else if (!path.has_extension())
            return path.filename();
        string filename = path.filename();
        int pos = filename.find_last_of('.');
        return filename.substr(0, pos);
    }
}
