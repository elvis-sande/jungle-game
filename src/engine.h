#ifndef ENGINE_H_
#define ENGINE_H_

class Engine {

public:
    static Engine* GetInstance() {
        return s_Instance = (s_Instance != nullptr) ? s_Instance : new Engine();  // Ensure only one instance of engine exists
    }   
    
    bool Init();
    bool Clean();
    void Quit();

    void Update();
    void Render();
    void Events();

    inline bool IsRunning(){return m_IsRunning;};    // Shall have private member var below

private:
    Engine();
    bool m_IsRunning;
    static Engine* s_Instance;    // static member of same type as class, and a pointer of class engine

};

#endif // ENGINE_H_