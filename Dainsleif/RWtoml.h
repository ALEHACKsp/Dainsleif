#pragma once

namespace RWtoml {
    void ReadSettings(std::string& filename);
    void WriteSettings(std::string& filename);
    void ReadOffsets(std::string& filename);
    void WriteOffsets(std::string& filename);
}