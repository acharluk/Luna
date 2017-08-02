--[[ Circle class ]]--
circle = {}
local circle_mt = { __index = circle }

--[[ Constructor ]]--
function circle:new(dat)
    local obj = {}
    obj.id = 'circle_' .. os.time()
    
    for k,v in pairs(dat) do
        obj[k] = v
    end
    obj.x = obj.x or 0
    obj.y = obj.y or 0
    obj.radius = obj.radius or 0
    obj.color = obj.color or colors.white


    setmetatable(obj, circle_mt)
    addShape(obj.id, 'circle', obj.x, obj.y, obj.radius, 0)
    return obj
end

--[[ Render ]]--
function circle:render()
    renderShape(self.id)
end

--[[ Setters ]]--
function circle:setPos(x, y)
    self.x = x or self.x
    self.y = y or self.y
    return self
end

function circle:setRadius(radius)
    self.radius = radius or self.radius
    return self
end

function circle:setColor(color)
    self.color = color
    return self
end