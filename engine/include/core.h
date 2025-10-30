//
// Created by faiskada on 29/10/2025.
//

#ifndef SPIT_2DEE_CORE_H
#define SPIT_2DEE_CORE_H
#include <cstdint>

namespace Engine {
    class Game {
        bool game_state = false;
        uint32_t game_tick = 0;
        uint8_t target_fps = 60.0f;
        float target_frame_time = 1.0f / static_cast<float>(target_fps);
        float variable_frame_time = 0.0f;
    public:
        [[nodiscard]] bool is_running() const;
        
        uint8_t get_target_fps() const;
        float get_target_frame_time() const;
        float get_variable_frame_time() const;
        void set_target_fps(uint8_t fps);
        
        void run();
        void quit();
    protected:
        virtual void on_run();
        virtual void on_quit();

        virtual void on_input();
        virtual void on_update(float frame_time);
        virtual void on_render();
    };
}

#endif //SPIT_2DEE_CORE_H