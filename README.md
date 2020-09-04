# Mercinaries Forever!
A personal project on reverse engineering the game Mercinaries: Playground of Destruction for the PS2, and adding modding support

Pull requests are ALWAYS appreciated, especially in looking through some of my reversed files and finding unused content, then adding them to the \*(interesting) file

# What I found
### Reversed Assets
This is where the work got put in
- english.txt
  * I made my own script to extract all of the text in the game, and this file is the output
  
 - english(interesting).txt
    * A list of all the interesting entries in english.txt

### Obvious files
These are some things that where just inside the game files and needed no reverse engineering whatsoever
- CREDITS.TXT
  * Some temporary placeholder credits left in there for testing purposes
- SHELLSCR.TXT
  * An interesting file that seems to contain some text that would show if the player went into a terminal in-game
- TINY.TGA
  * Some image file
- MOVIES/*
  * All of the video files in the game
- OGG/*
  * Some unused sound files
