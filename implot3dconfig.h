#pragma once

#include <MultiEngine.ImGui/imgui/ImGuiContext.h>

#define GImPlot3D ::MultiEngine::imgui_implot_3d_current_context()

#include <MultiEngine/math/geometry/Quaternions.h>

#define IMPLOT3D_POINT_CLASS_EXTRA                                                                                                                   											\
                     template <std::floating_point T>                                    															 											\
                     inline constexpr ImPlot3DPoint(const MultiEngine::Vector3<T>& v) noexcept : x(static_cast<double>(v.x)), y(static_cast<double>(v.y)), z(static_cast<double>(v.z)) {}       \
                     inline constexpr operator MultiEngine::Vector3d() const noexcept { return { this->x, this->y, this->z }; }

#define IMPLOT3D_QUAT_CLASS_EXTRA                                                                                                                    																				\
                     template <std::floating_point T>                                    															 																				\
                     inline constexpr ImPlot3DQuat(const MultiEngine::Quaternion<T>& v) noexcept : x(static_cast<double>(v.x)), y(static_cast<double>(v.y)), z(static_cast<double>(v.z)), w(static_cast<double>(v.w)) {}            \
                     inline constexpr operator MultiEngine::Quaterniond() const noexcept { return { this->x, this->y, this->z, this->w }; }