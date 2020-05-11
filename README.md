# Arcade Macro Keyboard

A macro keyboard made of arcade buttons. Acts like a normal USB keyboard, but each arcade button runs multi-key macros/shortcuts.

Example use:

I use it as a Stream Deck using OBS for Twitch/YouTube streaming. I set the "keyCodes" in the code to numbers 1-7 (ASCII 49-55), and the modifiers to CTRL, ALT, and SHIFT. Pressing arcade button 1 then sends the macro CTRL+ALT+SHIFT+1 to Windows, which I have mapped in OBS to switch to Scene 1. Etc etc.

It will work everywhere in Windows, and just acts like a standard USB keyboard inserting the shortcuts as though you yourself pressed it on your primary keyboard.

Number of buttons doesn't matter, you can do more or less, as long as you have enough inputs and modify the code appropriately to add/remove them. Diagram below shows 8, but the code here is currently set up for 7 as that's all I ended up using.

## Wiring Diagram

![Arcade Macro Keyboard Diagram](https://github.com/obsoletenerd/arcade-macro-keyboard/blob/master/WiringDiagram.png)

