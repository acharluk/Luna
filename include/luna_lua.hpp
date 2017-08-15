#pragma once

#include <lua5.3/lua.hpp>
#include "Sketch.hpp"

// For defining Lua functions
typedef int(*lua_CFunction) (lua_State *L);

// All Luna Lua functions here
namespace lunaL {
    /* Set size and title of the window */
    int size(lua_State *L);

     /* Clear the window */
    int clear(lua_State *L);

    /* Set fill color */
    int color(lua_State *L);

    /* Render a string of text */
    int text(lua_State *L);

    /* Render a rectangle */
    int rect(lua_State *L);

    /* Render a rectangle */
    int line(lua_State *L);

    /* Render a rectangle */
    int ellipse(lua_State *L);

    /*
     * Methods for handling objects (RectangleShape, CircleShape, Text)
     */
    int registerObject(lua_State *L);
    int editObject(lua_State *L);
    int renderObject(lua_State *L);
    int removeObject(lua_State *L);
    
    int log(lua_State *L);
    int frameRate(lua_State *L);
    int exit(lua_State *L);
};