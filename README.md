# Mercinaries-Forever
A personal project on reverse engineering the game Mercinaries: Playground of Destruction for the PS2, it was offically started on July 18 2020

Pull requests are ALWAYS appreciated, especially in looking through some of my reversed files and finding unused content, then adding them to the \*(interesting) file
# My to-do list:
- [x] Reverse-engineer the language file
- [ ] Reverse-engineer the multiple .TEX loading screens
- [ ] Figure out how the ASSETS.DSK file stores the assets, then extract them
- [ ] Figure out how the sound files work
- [ ] Reverse the actual binary itself Part 1
- [ ] Reverse the actual binary itself Part 2
- [ ] Reverse the actual binary itself Part 3
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
  * An interesting file that seems to contain some text that would show if the player went into a terminal in-gam
