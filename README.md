## dwmblocks - Status Bar for DWM

This is my custom setup for dwmblocks. It handles the information displayed in the top bar of my window manager. I kept it simple so it doesn't distract me but gives me exactly what I need to know about my system.

# How it works

It is useing realtime data from my system and sending it into the DWM status bar. It’s a modular system where I can plug in small scripts to show different info.

* Efficiency: Instead of one massive program dwmblocks just runs my tiny scripts at set intervals

# Applied Patches

I hand-patched this build to add functionality that isnt in the standard version:

* [**statuscmd**](https://dwm.suckless.org/patches/statuscmd/) It makes the status bar interactive.

# My Scripts

I use a mix of standard commands and some small custom scripts:

* Clock: Shows the time

* Volume: Updates instantly when I change the sound.

* Battery: Monitoring my power usage.

* WiFi: Simple script to see my connection.

* Bluetooth: A script to see my Bluetooth connection.

"Simple blocks for a clean system."
