#include "Debug.h"

    /// @brief CONSTRUCTOR
    /// @param Brain The desired brain to write to
    Debug::Debug(brain * Brain)
    {
        Brain = Brain;
    }

    /// @brief CONSTRUCTOR
    /// @param Brain The desired brain to write to
    /// @param fileName The desired file name to write to
    Debug::Debug(brain * Brain, std::string fileName)
    {

    }

    /// @brief Logs info to debug file 
    /// @param info The information written into the debug file
    void Debug::log(std::string info)
    {
        if(!Brain->SDcard.isInserted())
            return;

        ofs.open(fileName, std::ofstream::out);

        ofs << Brain->Timer.time() << ":    " << info;

        ofs.close();
    }

    /// @brief 
    /// @param info 
    void Debug::error(std::string info)
    {
        if(!Brain->SDcard.isInserted())
            return;

        ofs.open(fileName, std::ofstream::out);

        ofs << Brain->Timer.time() << ":    " << info;

        ofs.close();
    }

    /// @brief 
    /// @param info 
    void Debug::warning(std::string info)
    {

    }