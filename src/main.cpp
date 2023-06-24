#include "engine.h"

int main(int argc, char** argv)
{
    Engine::GetInstance()->Init();    // Initialize(call) engine. both methods declared in engine.h, defined in engine.cpp

    while(Engine::GetInstance()->IsRunning()){
        Engine::GetInstance()->Events();    // Check for occuring events
        Engine::GetInstance()->Update();    // Update vars based on inputs
        Engine::GetInstance()->Render();    // Render result on screen
    }

    Engine::GetInstance()->Clean();
    return 0;
}
