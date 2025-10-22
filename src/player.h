#pragma once

#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/classes/input.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp\classes\sprite2d.hpp>

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>

using namespace godot;


class Player : public Sprite2D {
    GDCLASS(Player, Sprite2D)

private:
    String right_key = "ui_right";
    String left_key = "ui_left";
    String up_key = "ui_up";
    String down_key = "ui_down";

protected:
    static void _bind_methods();

public:
    void _process(double delta);
    void _input(const Ref<InputEvent> &event) override;
    void set_right_key(String p_key);
    String get_right_key() const;

};
