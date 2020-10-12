.include "c64.inc"

COLOR_BLACK = 0
COLOR_WHITE = 1
COLOR_RED = 2
COLOR_CYAN = 3
COLOR_VIOLET = 4
COLOR_PURPLE = COLOR_VIOLET
COLOR_GREEN = 5
COLOR_BLUE = 6
COLOR_YELLOW = 7
COLOR_ORANGE = 8
COLOR_BROWN = 9
COLOR_LIGHTRED = 10
COLOR_GRAY1 = 11
COLOR_GRAY2 = 12
COLOR_LIGHTGREEN = 13
COLOR_LIGHTBLUE = 14
COLOR_GRAY3 = 15

charset = $4000
screen = $4800
color_ram = $d800

tmp1 = $02
ptr1 = $fb
ptr2 = $fd
ptr3 = $c1

port_types = 6
uesr_port_types = 3