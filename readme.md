# ABall for Adafruit KB2040

Your keyboard has plenty of buttons, why do you need more on your pointing device? ABall is a buttonless trackball designed to
fit nicely next to a kyria, or other keyboard which serves as the mouse buttons. For my use I have left, middle and right mouse
buttons on a layer along with keys for scroll up and down which I operate with my left hand while my right hand uses the ball for pointing.

* Keyboard Maintainer: [Richard Sutherland](https://github.com/brickbots)
* Special thanks to the Oddball for doing the heavy lifing with ADNS suport: [atulloh.github.io/oddball](https://atulloh.github.io/oddball)

Make example for this keyboard (after setting up your build environment):

`qmk flash -kb lucacri_aball -km default -e CONVERT_TO=kb2040 -j 20`