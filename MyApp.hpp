#ifndef __amorphous_MyApp__
#define __amorphous_MyApp__

#include "Wasm.hpp"
#include <chrono>


class MyApp : public WasmApp {

    std::chrono::time_point<std::chrono::system_clock> start_time;

    int CreateSampleTextureData(int width, int height, std::vector<unsigned char>& data);

    int CreateTexture();

public:

    int Init();

    void Render();
};

#endif /* __amorphous_MyApp__ */
