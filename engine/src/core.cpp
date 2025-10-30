//
// Created by faiskada on 29/10/2025.
//

#include "../include/core.h"

#include <chrono>
using namespace std::chrono;

namespace Engine {
    bool Game::is_running() const {
        return this->game_state;
    }

    uint8_t Game::get_target_fps() const {
        return this->target_fps;
    }
    float Game::get_target_frame_time() const {
        return this->target_frame_time;
    }
    float Game::get_variable_frame_time() const {
        return this->variable_frame_time;
    }
    void Game::set_target_fps(uint8_t fps) {
        this->target_fps = fps;
    }
    
    void Game::run() {
        this->on_run();

        time_point<high_resolution_clock> start_time {}, end_time {};
        duration<double> variable_frame_time {}, lack_time {}, accumulator {};
        float interp;
        
        while (this->is_running()) {
            // Measures variable frame-time (delta-time).
            start_time = high_resolution_clock::now();
            variable_frame_time = start_time - end_time;
            end_time = high_resolution_clock::now();

            // Accumulates delta.
            accumulator += variable_frame_time;
            // Calls on_update()'s logic as much times as needed.
            while (accumulator >= variable_frame_time) {
                this->on_update(this->get_target_frame_time());
                accumulator -= variable_frame_time;
            }
            
        }
    }

}