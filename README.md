# Arcade Macro Keyboard

A macro keyboard made of arcade buttons. Acts like a normal USB keyboard, but each arcade button runs multi-key macros/shortcuts.

Example use:

I use it as a Stream Deck using OBS for Twitch/YouTube streaming and Jitsi video calls. I set the "keyCodes" in the code to numbers 1-7 (ASCII 49-55), and the modifiers to CTRL, ALT, and SHIFT. Pressing arcade button 1 then sends the macro CTRL+ALT+SHIFT+1 to Windows, which I have mapped in OBS to switch to Scene 1. Etc etc.

It will work everywhere in Windows, not just OBS/Jitsi/etc, and just acts like a standard USB keyboard inserting the shortcuts as though you yourself pressed it on your primary keyboard. You could use it to run macros/combos for your games, or for photo/video editing, or whatever you want.

Number of buttons doesn't matter, you can do more or less, as long as you have enough inputs and modify the code appropriately to add/remove them. Diagram below shows 8, but the code here is currently set up for 7 as that's all I ended up using.

## Wiring Diagram

![Arcade Macro Keyboard Diagram](https://github.com/obsoletenerd/arcade-macro-keyboard/blob/master/WiringDiagram.png)

## Installation

1. Load the code onto your Arduino Nano
2. Plug the USB cable into your PC
3. Open up your OBS Settings and go to Hotkeys (this assumes you already have scenes set up)
4. Click on each of your scene's "Switch to Scene" entry, and press one of the buttons on the macro board to insert that button's shortcut combo
5. Click OK

![OBS Hotkeys](https://github.com/obsoletenerd/arcade-macro-keyboard/blob/master/MappingButtonsInOBS.png)

## Photos

![OBS Hotkeys](https://github.com/obsoletenerd/arcade-macro-keyboard/blob/master/ArcadeMacroKeyboard1.pjpg)

![OBS Hotkeys](https://github.com/obsoletenerd/arcade-macro-keyboard/blob/master/ArcadeMacroKeyboard2.jpg)

![OBS Hotkeys](https://github.com/obsoletenerd/arcade-macro-keyboard/blob/master/ArcadeMacroKeyboard3.jpg)