import turtle
t = turtle.Turtle()

t.speed(10)

turtle.bgcolor("green")

t.penup()
t.goto(0,-100)
t.pendown()
t.color('red')
t.begin_fill()
t.circle(100)
t.end_fill()
turtle.done()
