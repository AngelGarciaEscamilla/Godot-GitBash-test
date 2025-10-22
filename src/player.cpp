#include "player.h"

#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/classes/input.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;


void Player::_process(double delta) {}

void Player::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_right_key", "value"), &Player::set_right_key);
    ClassDB::bind_method(D_METHOD("get_right_key"), &Player::get_right_key);
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "right_key"), "set_right_key", "get_right_key");
}

void Player::_input(const Ref<InputEvent> &event) {
    Input *input = Input::get_singleton();
    if (event->is_pressed() && event->is_action(right_key)) {
        UtilityFunctions::print(right_key);
    }
}

void Player::set_right_key(String p_key) {
    right_key = p_key;
}

String Player::get_right_key() const {
    return right_key;
}
