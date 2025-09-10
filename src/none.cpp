#include "none.h"

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/engine.hpp>

using namespace godot;

void None::_process(double delta) {
    if (!Engine::get_singleton()->is_editor_hint()){
        UtilityFunctions::print("Hello since C++!");
    }
}

void None::_bind_methods() {
}
