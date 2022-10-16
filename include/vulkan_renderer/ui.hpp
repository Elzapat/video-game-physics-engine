#ifndef UI_HPP
#define UI_HPP

#include "../../libs/imgui/backends/imgui_impl_vulkan.h"
#include "../../libs/imgui/backends/imgui_impl_glfw.h"
#include "../../libs/glfw/include/GLFW/glfw3.h"

#include "../math/vector3D.hpp"
#include "../physics_engine/physic_world.hpp"
#include "../physics_engine/particle.hpp"

#include <vulkan/vulkan.h>
#include <memory>

class Ui {
    public:
        void draw(int n_particules, Particle& particule, math::Vector3D rotation);
        void render(VkCommandBuffer& command_buffer);
        ImGui_ImplVulkanH_Window* get_window_data();
        float eye_x = 0.0f;
        float eye_y = 0.0f;
        float eye_z = 0.0f;
        float look_at_x = 0.0f;
        float look_at_y = 0.0f;
        float look_at_z = 0.0f;
        float rot_x = 0.0f;
        float rot_y = 0.0f;

    private:
        ImGui_ImplVulkanH_Window main_window_data;
};

#endif // UI_HPP
