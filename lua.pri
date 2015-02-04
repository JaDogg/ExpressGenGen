# from http://brunov.info/blog/2013/06/06/qmake-adding-boost-c-libraries-include-directory/

# Find Lua library.
# Try to use qmake variable's value.
_LUA_ROOT = $$LUA_ROOT
isEmpty(_LUA_ROOT) {
    message(\"Lua Library\" qmake value not detected...)

    # Try to use the system environment value.
    _LUA_ROOT = $$(LUA_ROOT)
}

isEmpty(_LUA_ROOT) {
    message(\"Lua Library\" environment variable not detected...)
    error(Please set the environment variable LUA_ROOT)
} else {
    message(\"Lua Library\" detected in LUA_ROOT = \"$$_LUA_ROOT\")
    INCLUDEPATH += $$_LUA_ROOT
    LIBS += -L$$_LUA_ROOT -llua
}
