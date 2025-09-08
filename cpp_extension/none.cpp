#include "none.h"

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void None::_process(double delta) {
    UtilityFunctions::print("Hello since C++!");
}

void None::_bind_methods() {
    ClassDB::bind_method(D_METHOD("_process", "delta"), &None::_process);
}
