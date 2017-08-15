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

    /*
        Draw a string of text on the screen, called
        from text(t,s,x,y) Lua function
    */
    int text(lua_State *L);

    /*
        Draw a rectangle starting at point 'p1',
        with width and height 'p2', called from
        rect(x1,y1,x2,y2) Lua function 
    */
    int rect(lua_State *L);

    /*
        Draw a line between points 'p1' and 'p2',
        called from line(x1,y1,x2,y2) Lua function 
    */
    int line(lua_State *L);

    /*
        Draw an ellipse with center at point 'pos'
        and the size 'rx' and 'ry', called from
        ellipse(x,y,rx,ry) Lua function
    */
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