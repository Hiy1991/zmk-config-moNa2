#ifdef CONFIG_LAYOUT_SHIFT_TARGET_COLEMAK
#define LAYOUT_DEFINED
// Colemak keyboard layout mappings
// Maps US QWERTY keycodes to their Colemak equivalents
static const struct keycode_mapping layout_map[] = {
    /* from -> to, optional_modifiers */
    {E, F, OPTIONAL_ALL},                   // E -> F (all modifiers optional for letters)
    {R, P, OPTIONAL_ALL},                   // R -> P (all modifiers optional for letters)
    {T, G, OPTIONAL_ALL},                   // T -> G (all modifiers optional for letters)
    // ... add more mappings as needed
    // For symbols, you might want to require certain modifiers:
    // {COMMA, W, OPTIONAL_CTRL | OPTIONAL_ALT},  // , -> W (Shift required, Ctrl/Alt optional)
};
#endif
