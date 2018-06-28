#ifndef __amorphous_MyApp__
#define __amorphous_MyApp__

#include "Wasm.hpp"
#include <chrono>


class MyApp : public WasmApp {

    std::chrono::time_point<std::chrono::system_clock> start_time;

    int LoadImageFromFile(const char *image_pathname, void *&data, unsigned int &w, unsigned int &h);

    int CreateTexture();

public:

    int Init();

    void Render();
};

#endif /* __amorphous_MyApp__ */
