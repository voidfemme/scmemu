# SCMEMU
## A Subtractive Color Mixing Emulator
### Background
I came up with the idea for SCMEMU after using a photo color inversion program. In school, I learned that the opposite of red is green, and the opposite of blue is orange. This is not so, when it comes to mixing colored light. A simple algorithm for inverting 256-bit color codes goes something like this:<br />
`255-R, 255-G, 255-B`
For instance, if you want to invert red (#ff0000, aka 255,0,0), this equation will get you a lovely light blue (#00ffff), rather than green (#00ff00).<br /><br />
And this makes sense to me, due to how colors work in the real world. Sunlight appears white because all of the colors of light it emits combine to form white light. This is called additive mixing; because the colors add to the overall brightness. You can test this by using a prism to split the light into its component wavelengths, giving you a rainbow of color.<br /><br />

Pigment, on the other hand, works the opposite. Rather than emitting light, it absorbs many of the frequencies of light that hit it, and reflecting a relatively narrow range of frequencies, giving the illusion of color. When pigments are mixed, they become darker, as they are able to absorb a broader range of the light spectrum. In theory, it's a simple concept, but after some researching, I discovered that this is not the end of the story. Many things contribute to the illusion of subtractive color mixing. What surprised me, is that the difference between subtractive and additive color mixing is also due to the way human beings percieve light. This goes far beyond my high-school understanding of color theory, but luckily, I found <a href="http://scottburns.us/subtractive-color-mixture/">this blog post</a> by Scott Burns, who does a much better job at explaining it than I can.<br /><br />

### Goal
My goal is to create a moderately functioning subtractive color mixing emulation from scratch. While I understand that reinventing the wheel isn't the most efficient way of working, I think the process of learning how to make a functioning program from the ground up will be an excellent way to mastering key programming concepts, and becoming more familiar with the process of development as a whole. The entire idea behind this project is for personal development of my craft. If you are interested in this project, please feel free to look at the code and notify me of any bugs if you spot them.

### Closing notes
This project is in its early stages, and is not a fully functioning program. The files titled `matrix-M-XYZ-to-linear-rgb-D65.txt` and `matrix_A_prime` were downloaded straight from Scott Burns' blog, and I will be committed to documenting any and all of my sources thoroughly. If there are any oversights on my part to give sufficient credit to my sources, I will do my best to rectify it as quickly as I can.<br />
Lastly, please forgive any confusing commits(/other rookie github mistakes) as I am still getting acquainted with github as a platform <3 Thanks.

### References:
["Subtractive Color Mixture Computation"](http://scottburns.us/subtractive/color/mixture "Subtractive Color Mixture Computation") http://scottburns.us/subtractive/color/mixture
