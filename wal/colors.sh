# Shell variables
# Generated by 'wal'
wallpaper='/home/joel/.config/wpg/wallpapers/pink-feather.png'

# Special
background='#0f0f0f'
foreground='#fffdf1'
cursor='#fffdf1'

# Colors
color0='#0f0f0f'
color1='#f05365'
color2='#4a7c59'
color3='#edd9a3'
color4='#1d70a2'
color5='#fcf6bd'
color6='#52d1dc'
color7='#f9ebe0'
color8='#282828'
color9='#ff5673'
color10='#53ae6e'
color11='#ffffb6'
color12='#1994df'
color13='#ffffc1'
color14='#56ffff'
color15='#fffdf1'

# FZF colors
export FZF_DEFAULT_OPTS="
    $FZF_DEFAULT_OPTS
    --color fg:7,bg:0,hl:1,fg+:232,bg+:1,hl+:255
    --color info:7,prompt:2,spinner:1,pointer:232,marker:1
"

# Fix LS_COLORS being unreadable.
export LS_COLORS="${LS_COLORS}:su=30;41:ow=30;42:st=30;44:"