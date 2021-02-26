#include <iostream> // cout, cin, cerr etc...
#include <fstream> // ifstream, ofstream
#include <string>


int main()
{
    std::string sFilename = "MyFile.txt";    

    /******************************************
     *                                        *
     *                WRITING                 *
     *                                        *
     ******************************************/

    std::ofstream fileSink(sFilename); // Creates an output file stream

    if (!fileSink) {
        std::cerr << "Canot open " << sFilename << std::endl;
        exit(-1);
    }

    /* std::endl will automatically append the correct EOL */
    fileSink << "Hello Open Source World!" << std::endl;

    /******************************************
     *                                        *
     *                READING                 *
     *                                        *
     ******************************************/
    
    std::ifstream fileSource(sFilename); // Creates an input file stream

    if (!fileSource) {
        std::cerr << "Canot open " << sFilename << std::endl;
        exit(-1);
    }
    else {
        // Intermediate buffer
        std::string buffer;

        // By default, the >> operator reads word by workd (till whitespace)
        while (fileSource >> buffer) 
        {
            std::cout << buffer << std::endl;
        }
    }

    exit(0);
}

