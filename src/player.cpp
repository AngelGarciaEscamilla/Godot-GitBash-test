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
    ClassDB::bind_method(D_METHOD("set_down_key", "value"), &Player::set_right_key);
    ClassDB::bind_method(D_METHOD("get_down_key"), &Player::get_right_key);
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "down_key"), "set_down_key", "get_down_key");

    ClassDB::bind_method(D_METHOD("set_up_key", "value"), &Player::set_right_key);
    ClassDB::bind_method(D_METHOD("get_up_key"), &Player::get_right_key);
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "up_key"), "set_up_key", "get_up_key");

    ClassDB::bind_method(D_METHOD("set_left_key", "value"), &Player::set_right_key);
    ClassDB::bind_method(D_METHOD("get_left_key"), &Player::get_right_key);
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "left_key"), "set_left_key", "get_left_key");

    ClassDB::bind_method(D_METHOD("set_right_key", "value"), &Player::set_right_key);
    ClassDB::bind_method(D_METHOD("get_right_key"), &Player::get_right_key);
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "right_key"), "set_right_key", "get_right_key");
}

void Player::_input(const Ref<InputEvent> &event) {
    Input *input = Input::get_singleton();
    if (event->is_pressed() && event->is_action(right_key)) {
        UtilityFunctions::print(right_key);
    }

    if (event->is_pressed() && event->is_action(left_key)) {
        UtilityFunctions::print(left_key);
    }
    
    if (event->is_pressed() && event->is_action(up_key)) {
        UtilityFunctions::print(up_key);
    }
    if (event->is_pressed() && event->is_action(down_key)) {
        UtilityFunctions::print(down_key);
    }
}


//SETTER

void Player::set_right_key(String p_key) {
    right_key = p_key;
}

void Player::set_left_key(String p_key) {
    left_key = p_key;
}

void Player::set_up_key(String p_key) {
    up_key = p_key;
}

void Player::set_down_key(String p_key) {
    down_key = p_key;
}

//GETTER

String Player::get_left_key() const {
    return left_key;
}


String Player::get_right_key() const {
    return right_key;
}

String Player::get_up_key() const {
    return up_key;
}


String Player::get_down_key() const {
    return down_key;
}
