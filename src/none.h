#pragma once

#include <godot_cpp\classes\node.hpp>

using namespace godot;

class None : public Node {
    GDCLASS(None, Node)

public:
    None() {}
    ~None() {}

    void _process(double delta);
    static void _bind_methods();
};
