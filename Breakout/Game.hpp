//
//  Game.hpp
//  Breakout
//
//  Created by Matt Amerige on 4/11/17.
//  Copyright © 2017 Matt Amerige. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Represents the current sate of the game
enum GameState {
    GAME_ACTIVE,
    GAME_MENU,
    GAME_WIN
};

// Game holds all game-related state and functionality
// Combines all game-related data int oa single class for
// wasy access to ech of the components and manageability.
class Game {
public:
    // GameState
    GameState State;
    GLboolean Keys[1024];
    GLuint Width, Height;
    // Constructor/Deconstructor
    Game(GLuint width, GLuint height);
    ~Game();
    // Initialize game state (load all shaders/textures/levels)
    void Init();
    // Gameloop
    void ProcessInput(GLfloat dt);
    void Update(GLfloat dt);
    void Render();
    
};

#endif /* Game_hpp */
