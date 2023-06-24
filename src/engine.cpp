#include "engine.h"
#include <iostream>

Engine* Engine::s_Instance = nullptr;

Engine::Engine(){}    // added to eliminate linker error

bool Engine::Init(){
    m_IsRunning = true;
    return 0;
}

bool Engine::Clean(){
    return 0;
}

void Engine::Quit(){}

void Engine::Update(){
    std::cout << "Looping" << std::endl;
}

void Engine::Render(){}

void Engine::Events(){}