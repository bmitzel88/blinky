#include <bn_core.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_keypad.h>

int main()
{
    bn::core::init();
    bn::backdrop::set_color(bn::color(3, 13, 31));

    while (true)
    {
        // default color
        if (!bn::keypad::any_pressed())
        {
            bn::backdrop::set_color(bn::color(10, 0, 10));
        }

        if (bn::keypad::b_held())
        {
            bn::backdrop::set_color(bn::color(31, 31, 31));
        }

        if (bn::keypad::a_pressed())
        {
            bn::backdrop::set_color(bn::color(26, 5, 12));
        }

        if (bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(4, 27, 12));
        }

        if (bn::keypad::down_pressed())
        {
            bn::backdrop::set_color(bn::color(24, 25, 12));
        }

        bn::core::update();
    }
}